// http://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0
// dp

#include <iostream>
using namespace std;

int GetKnapsackBottomUp(int * arrWT, int * arrValue, int N, int W)
{
    int dpTable[101][101];
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= W; j++)
            dpTable[i][j] = 0;
    }
    
    // fill dpTable
    for(int i = 0; i < N; i++)
    {
    	for(int j = arrWT[i]; j <= W; j++)
    	{
    	    if( i = 0)
    	        dpTable[i][j] = arrValue[i];
    	        //dpTable[i][j] = max(dpTable[i][j - 1], arrValue[i]);
    	    else
    		    dpTable[i][j] = max(dpTable[i][j - arrWT[i]] + arrValue[i], dpTable[i - 1][j]);
    		//cout << i << ", " << j << " : "<< dpTable[j] << endl;
    	}         
    }
    
    return dpTable[N-1][W];
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

/*
You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. 
Note that we have only one quantity of each item, In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. 
Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. 
You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).
 
Input:
The first line of input contains an integer T denoting the number of test cases. 
Then T test cases follow. Each test case consists of four lines. The first line consists of N the number of items. 
The second line consists of W, the maximum capacity of the knapsack. 
In the next  line are N space separated positive integers denoting the values of the N items and in the fourth line are N space separated positive integers denoting the weights of the corresponding items.
 
Output:

Print the maximum possible value you can get with the given conditions that you can obtain for each test case in a new line.
 

Constraints:

1≤T≤100

1≤N≤100

1≤W≤100

1≤wt[i]≤100

1≤v[i]≤100


Example:

Input:
1
3
4
1 2 3
4 5 1
Output:
3

*/