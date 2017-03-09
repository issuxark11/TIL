#include <iostream>
using namespace std;

// 잔돈 교환 경우의 수 
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
	    cin >> iNumOfCoin, iTotalAmount;
	    
	    for(int i =0; i < iNumOfCoin; i++)
	    {
	        cin >> arrCoin[i];
	    }
	    
	    CoinChangeBottomUp(arrCoin, iNumOfCoin, iTotalAmount);
	}
	
	return 0;
}