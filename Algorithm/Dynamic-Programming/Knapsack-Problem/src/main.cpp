// http://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0
// dp

#include <iostream>
using namespace std;

int GetKnapsackBottomUp(int * arrWT, int * arrValue, int N, int W)
{
    int dpTable[101][101];
    
    for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= W; j++)
            dpTable[i][j] = 0;
    }

    // fill dpTable
    for(int i = 1; i <= N; i++)
    {
    	for(int j = 1; j <= W; j++)
    	{
    		if( j - arrWT[i-1]  >= 0)
    	    		dpTable[i][j] = max(dpTable[i-1][j - arrWT[i-1]] + arrValue[i-1], dpTable[i-1][j]);
    		else
    			dpTable[i][j] = dpTable[i-1][j];

    		//cout << i << ", " << j << " : "<< dpTable[i][j] << endl;
    	}         
    }
    
    return dpTable[N][W];
}

int main() {
	//code
	int T, N, W;
	int arrWT[100];
	int arrValue[100];
	
	cin >> T;
	while(T-- > 0) {
	    
	    cin >> N >> W;
	    for(int i = 0; i < N; i++) {
	        cin >> arrValue[i];
	    }
	    
	    for(int i = 0; i < N; i++) {
	        cin >> arrWT[i];
	    }
	    
	    cout << GetKnapsackBottomUp(arrWT, arrValue, N, W) << endl;
	}

	return 0;
}