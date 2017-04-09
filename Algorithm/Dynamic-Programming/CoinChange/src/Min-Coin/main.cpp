// http://practice.geeksforgeeks.org/problems/min-coin/0

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