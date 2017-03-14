# Algorithm - Dynamic Programming (Longest Increasing Subsequence)

## Longest Increasing Subsequence
* The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order
```shell
# Solution
1. Optimal Substructure
- Let arr[0..n-1] be the input array and L(i) be the length of the LIS ending at index i such that arr[i] is the last element of the LIS.
- L(i) can be recursively written as:
  1) L(i) = 1 + max( L(j) ) where 0 < j < i and arr[j] < arr[i]
  2) L(i) = 1, if no such j exists.

2. Overlapping Subproblems

```

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/dynamic-programming-set-3-longest-increasing-subsequence/)