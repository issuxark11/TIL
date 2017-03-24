# Algorithm - Sorting

## Bubble Sort
- Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order
```shell
- Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
- Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
- Auxiliary Space: O(1)
- Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
- Sorting In Place: Yes
- Stable: Yes
```

### Implementation
```shell
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
```

### Optimized Implementation
```shell
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
```

## Reference
* [geeksforgeeks](http://quiz.geeksforgeeks.org/bubble-sort/)
