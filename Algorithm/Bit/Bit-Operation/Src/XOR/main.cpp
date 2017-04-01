// http://practice.geeksforgeeks.org/problems/xor-of-all-elements/0

#include <iostream>
using namespace std;

int main() 
{
	int T, N;
	int A[100];
	int B[100];
	
	cin >> T;
	
	while(T-- > 0)
	{
	    cin >> N;
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    
	    for(int i = 0; i < N; i++)
	    {
	        B[i] = 0;
	        for(int j = 0; j < N; j++)
	        {
	            if(i != j)
	            {
	                B[i] ^= A[j];    
	            }
	        }
	    }
	    
	    for(int i = 0; i < N; i++)
	    {
	        cout << B[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}