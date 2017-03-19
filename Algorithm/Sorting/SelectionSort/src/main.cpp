#include <iostream>
#include <algorithm>
using namespace std;

int select(int arr[], int i)
{
 	 int max = 0;
    
 	for(int j = 0; j <= i; j++)
   	{
       		if(arr[j] >= arr[max])
            			max = j;
   	}
   
   	return max;
}

void SelectionSort(int arr[], int n)
{
	for(int i = n-1; i >=0; i--)
	{
		int j = select(arr, i);
		swap(arr[i], arr[j]);
	}
}

int main() {
	// Your code here  
    	int T, N;
    	int arr[1000];
    
    	cin >> T;
    
    	while(T-- > 0)
    	{
        		cin >> N;
        
        		for(int i = 0 ; i < N; i++)
        		{
            			cin >> arr[i];
        		}

        		SelectionSort(arr, N);
        	}
	
	return 0;
}