#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSortOptimized(int arr[], int n)
{
  bool bSwaped = false;

  for(int i = 0; i < n-1; i++)
  {
    for(int j = i+1; j < n - 1; j++)
    {
      if(arr[j] > arr[j+1])  
      {
        swap(arr[j], arr[j+1]);
        bSwaped = true;
      }
    }

    if(bSwaped == false)
      break;
  }
}

void BubbleSort(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
    for(int j = i+1; j < n - 1; j++)
		{
      if(arr[j] > arr[j+1])  
      {
        swap(arr[j], arr[j+1]);
      }
    }
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

        		BubbleSort(arr, N);
        	}
	
	return 0;
}