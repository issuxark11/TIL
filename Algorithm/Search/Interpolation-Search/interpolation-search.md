# Algorithm - Search

## Interpolation Search Introduction
- Given a sorted array of n uniformly distributed values arr[], write a function to search for a particular element x in the array
- The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed
- Binary Search always goes to middle element to check. On the other hand interpolation search may go to different locations according the value of key being searched
```shell
// The idea of formula is to return higher value of pos
// when element to be searched is closer to arr[hi]. And
// smaller value when closer to arr[lo]
pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

arr[] ==> Array where elements need to be searched
x     ==> Element to be searched
lo    ==> Starting index in arr[]
hi    ==> Ending index in arr[]
```
## Interpolation Search Algorithm
```shell
Step1: In a loop, calculate the value of “pos” using the probe position formula.
Step2: If it is a match, return the index of the item, and exit.
Step3: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right sub-array.
Step4: Repeat until a match is found or the sub-array reduces to zero.
```

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/interpolation-search/)
