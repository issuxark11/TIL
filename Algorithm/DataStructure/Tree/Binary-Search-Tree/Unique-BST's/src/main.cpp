// http://practice.geeksforgeeks.org/problems/unique-bsts/0

#include <iostream>
using namespace std;

int CalculateNumOfTree(int n) {

	long long int x = 1, y = 1;

	for(int i = 2*n; i >= n+1; i--)
		x = x*i;

	for(int i = n+1; i >=2; i--)
		y = y*i;

	return x/y;
}

int main() {
	//code
	int t, n;
	
	cin >> t;
	while(t-- > 0) {
	    cin >> n;
	    int result = CalculateNumOfTree(n);
	    cout << result << endl;
	}
	
	return 0;
}

/*
Given an interger N, how many structurally unique binary search trees are there that store values 1...N?

Input:
First line contains the test cases T.  1<=T<=15
Each test case have one line which is an interger N.  1<=N<=11

Example:
Input:
2
2
3

Output:
2
5

*/