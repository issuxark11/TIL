# Algorithm - Dynamic Programming (Coin Change)

## Coin Change
* Given a value N, if we want to make change for N cents, and we have infinite supply of m valued coins, how many ways we make the change?
```shell
# Solution
1. Optimal Substructure
    - divide all set solutions in two sets
      1) Solutions not contain m-th coin
      2) Solutions contain at least one m-th coin

2. Overlapping Subproblems
    - recursive implementation

# Time Complexity
```
```shell
# Example
Given the list of coins of distinct denominations and total amount of money. Output the minimum number of coins required to make up that amount.

# Input
int T: number of test case
int N : Number of distinct coins
int amount : toal amount of money
int arr[N] : values of coins

# Output
Print minimum number of coins required to make up that amount
Return -1 if it is impossible to make the amount using given coins
```
## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/dynamic-programming-set-7-coin-change/)
