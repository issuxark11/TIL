# Algorithm - Dynamic Programming (Knapsack Problem)

## Knapsack Problem
- Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. 
- In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. 
- Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. 
- You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).

```shell
# Solution
1. Optimal Substructure:
To consider all subsets of items, there can be two cases for every item: 
(1) the item is included in the optimal subset 
(2) not included in the optimal set.

Therefore, the maximum value that can be obtained from n items is max of following two values.
1) Maximum value obtained by n-1 items and W weight (excluding nth item).
2) Value of nth item plus maximum value obtained by n-1 items and W minus weight of the nth item (including nth item).

If weight of nth item is greater than W, then the nth item cannot be included and case 1 is the only possibility.

2. Overlapping Subproblems
Following is recursive implementation that simply follows the recursive structure mentioned above.

```

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/dynamic-programming-set-3-longest-increasing-subsequence/)