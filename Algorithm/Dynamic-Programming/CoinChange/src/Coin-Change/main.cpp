// http://practice.geeksforgeeks.org/problems/coin-change/0
// dp

#include <iostream>
#include <vector>
using namespace std;

int CoinChangeTopDown(long long int S[], int iNumOfCoin, int iTotalAmount) 
{
    if(iTotalAmount == 0)
        return 1;

    if(iTotalAmount < 0)
        return 0;

    if( iNumOfCoin <= 0 && iTotalAmount >=1)
        return 0;

    return CoinChangeTopDown(S, iNumOfCoin -1, iTotalAmount) + CoinChangeTopDown(S, iNumOfCoin, iTotalAmount-S[iNumOfCoin - 1]);
}

// Trouble Shooting : input overflow -> use long long int
void CoinChangeBottomUp(vector<long long int>& vValueOfCoin, int iNumOfCoin, int iTotalAmount)
{
    vector<long long int> vNumOfCoinChange(iTotalAmount+1,0 );

    vNumOfCoinChange[0] = 1;

    for(int i = 0; i < iNumOfCoin; i++) {
        for(int j = vValueOfCoin[i]; j <= iTotalAmount; j++) {
            vNumOfCoinChange[j] += vNumOfCoinChange[j - vValueOfCoin[i]];    
        }
    }
    
    cout << vNumOfCoinChange[iTotalAmount] << endl;
}

int main() {
        
    //code
    int T, iNumOfCoin;
    long long int iTotalAmount, iAmount;
    vector<long long int> vValueOfCoin;
     
    cin >> T;
    
    while(T-- > 0) {
        vValueOfCoin.clear();
        
        cin >> iNumOfCoin;
        for(int i = 0; i < iNumOfCoin; i++) {
            cin >> iAmount; 
            vValueOfCoin.push_back(iAmount);
        }

        cin >>  iTotalAmount;
        
        CoinChangeBottomUp(vValueOfCoin, iNumOfCoin, iTotalAmount);
    }
        
    return 0;
}

/*
Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins. The order of coins doesn’t matter. 
For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. 
So output should be 4. For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. 
So the output should be 5.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, the first line contains an integer 'M' denoting the size of array. The second line contains M space-separated integers A1, A2, ..., AN denoting the elements of the array. The third line contains an integer 'N' denoting the cents.

Output:
Print number of possible ways to make change for N cents.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 300
1 1 ≤ A[i] ≤ 300

Example:

Input:
2
3
1 2 3
4
4
2 5 3 6
10

Output:
4
5

*/