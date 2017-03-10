#include <iostream>
using namespace std;

int CompareInt(const void *a, const void *b)
{
    if ( *(int *)a >= *(int *)b ) 
        return 1; 
    else 
        return -1; 
}

// 총액을 맞추기 위한 최소 동전의 수 : dp, greedy
/* T1 - Solved
97 86909
491 525 464 219 183 648 796 287 979 395 356 702 667 743 976 908 728 134 106 380 193 214 71 920 114 587 543 817 248 537 901 739 752 364 649 626 702 444 913 681 529 959 72 196 392 738 103 119 872 900 189 65 113 260 985 228 537 217 735 785 445 636 214 196 690 553 822 392 687 425 763 216 73 525 412 155 263 205 965 825 105 153 580 218 103 255 136 641 472 872 115 607 197 19 494 577 572 
*/ 
/* T2 - Not Solved
16 866
575 336 860 760 835 498 737 384 110 78 925 320 755 176 690 784
*/

void MinCoinBottomUp(int* arrCoin, int iNumOfCoin, int iTotalAmount)
{
    int dpTable[iTotalAmount+1];
    int case1; // arrCoin[j]를 미포함하는 경우 
    int case2; // arrCoin[j]를 포함하는 경우

    // 초기화
    memset(dpTable, -1, sizeof(int)* (iTotalAmount+1));
    
    // iTotalAmount 가 0 일때는 0로 채운다.
    dpTable[0] = 0;   

    for(int i = 1; i < iTotalAmount+1 ; i++)
    {
        for(int j = 0; j < iNumOfCoin; j++)
        {
            if(dpTable[i] == -1)
            {
                // arrCoin[j]를 포함하는 경우
                if(i-arrCoin[j] >= 0)
                {
                    dpTable[i] = dpTable[i-arrCoin[j]] + 1;
                }
                else
                {
                    break;
                }
            }
            else
            {
                case1 = dpTable[i];
                       
                if(i-arrCoin[j] >= 0)
                {
                    case2 = dpTable[i-arrCoin[j]] + 1;
                    
                    if(case1 != 0)
                    {
                        if(case2 != 0)
                            dpTable[i] = min(case1, case2);
                        else
                            dpTable[i] = case1;
                    } else
                    {
                        dpTable[i] = case2;   
                    }
                } 
            }
        }
    } 
    
    if(dpTable[iTotalAmount] == 0)
        cout << -1 << endl;
    else
        cout << dpTable[iTotalAmount] << endl;

}

// 잔돈 교환 경우의 수 : dp
void CoinChangeBottomUp(int* arrCoin, int iNumOfCoin, int iTotalAmount)
{
    int dpTable[iTotalAmount+1][iNumOfCoin];
    int case1; // arrCoin[j]를 포함하는 경우 
    int case2; // arrCoin[j]를 미포함하는 경우

    // 초기화
    //memset(dpTable, -1, sizeof(int)* iNumOfCoin * (iTotalAmount+1));
    
    // iTotalAmount 가 0 일때는 1로 채운다.
   	for(int j = 0; j < iNumOfCoin; j++)
	{
		dpTable[0][j] = 1;
	}	

    for(int i = 1; i < iTotalAmount+1 ; i++)
    {
    	for(int j = 0; j < iNumOfCoin; j++)
    	{
    		// arrCoin[j]를 포함하는 경우
    		if(i-arrCoin[j] >= 0)
    			case1 = dpTable[i-arrCoin[j]][j];
    		else
    			case1 = 0;

			// arrCoin[j]를 미포함하는 경우 
    		if(j-1 >= 0)
    			case2 = dpTable[i][j-1];
    		else
    			case2 = 0;

    		dpTable[i][j] = case1 + case2;
    	}
    }
    
    if(dpTable[iTotalAmount][iNumOfCoin - 1] > 0)
    {
        cout << dpTable[iTotalAmount][iNumOfCoin - 1] << endl;
    } 
    else
    {
        cout << "-1" << endl;   
    }
}

int main() {
	//code
	int T;
	int iNumOfCoin, iTotalAmount;
	int arrCoin[100];

	cin >> T;
	
	while(T-- > 0)
	{
	    cin >> iNumOfCoin >> iTotalAmount;
	    
	    for(int i =0; i < iNumOfCoin; i++)
	    {
	        cin >> arrCoin[i];
	    }
	    
        //MinCoinBottomUp(arrCoin, iNumOfCoin, iTotalAmount);
	    CoinChangeBottomUp(arrCoin, iNumOfCoin, iTotalAmount);
	}
	
	return 0;
}