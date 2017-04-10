// http://practice.geeksforgeeks.org/problems/min-coin/0
// dp + greedy

#include <iostream>
#include <vector>
using namespace std;

#define MAX 987654321

int MinCoinTopDown(vector<int>& vValueOfCoin, int iNumOfCoin, int iTotalAmount)
{
    int iReturn = -1;
    
    return iReturn;
}

void MinCoinBottomUp(vector<int>& vValueOfCoin, int iNumOfCoin, int iTotalAmount)
{
    int CoinCount[100001] ;  // CoinCount[N] : 잔돈 N을 만드는데 필요한 최소 동전의 개수(dynamic table)

    CoinCount[0] = 0;  // 0원을 만들기 위한 동전의 개수는 0개
    for(int i = 1; i <= iTotalAmount; i++)
    {
        CoinCount[i] = MAX;  // MAX로 초기화
    }

    for(int i = 0; i < iNumOfCoin; i++)
    {
        for(int j = vValueOfCoin[i]; j <=iTotalAmount; j++)
        {
            CoinCount[j] = min (CoinCount[j], CoinCount[j - vValueOfCoin[i]] + 1);
        }
    }
    
    if(CoinCount[iTotalAmount] != MAX) {
        cout << CoinCount[iTotalAmount] << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
        
    //code
    int T, iNumOfCoin, iTotalAmount, iAmount;
    vector<int> vValueOfCoin;
     
    cin >> T;
    
    while(T-- > 0) {
        vValueOfCoin.clear();
        cin >> iNumOfCoin >> iTotalAmount;
        
        for(int i = 0; i < iNumOfCoin; i++) {
            cin >> iAmount; 
            vValueOfCoin.push_back(iAmount);
        }

        MinCoinBottomUp(vValueOfCoin, iNumOfCoin, iTotalAmount);
    }
        
    return 0;
}

/*
Given the list of coins of distinct denominations and total amount of money. Output the minimum number of coins required to make up that amount.
Output -1 if that money cannot be made up using given coins.
You may assume that there are infinite numbers of coins of each type.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each cases begins with the two space separated integers 'n' and 'amount' denoting the total number of distinct coins and total amount of money respectively.
The second line contains N space-separated integers A1, A2, ..., AN denoting the values of coins.

Output:
Print the minimum number of coins required to make up that amount or return -1 if it is impossible to make that amount using given coins.

Constraints:
1<=T<=30
1<=n<=100
1<=Ai<=1000
1<=amount<=100000

Example:

Input :
2
3 11
1 2 5
2 7
2 6
  
Output :
3
-1

*/