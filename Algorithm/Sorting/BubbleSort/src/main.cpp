#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSortOptimized(int arr[], int n)
{
  bool bSwaped = false;

  for(int i = 0; i < n-1; i++)
  {
    // Last i Elements are already in place
    for(int j = 0; j < n - i - 1; j++)
    {
      if(arr[j] > arr[j+1])  
      {
        swap(arr[j], arr[j+1]);
        bSwaped = true;
      }
    }

    // if no two elements were swapped by inner loop, then break
    if(bSwaped == false)
      break;
  }
}

void BubbleSort(int arr[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
    // Last i Elements are already in place
    for(int j = 0; j < n - i - 1; j++)
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