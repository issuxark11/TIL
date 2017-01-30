# Dynamic Programming
* Use when sub-problems are evaluated many times (e.g 점화식) 
* Solving complex problem by breaking it into subproblems and stores the results of subproblems to avoid computing the same results again.

## Properties
1. Overapping Subproblems
```shell
results of subproblems are stored in a table
* Two ways to store the results
  a) Top Down (Memoization)
     First, initialize lookup table with all initial values as NULL
     Whenever we need solution to a subproblem, we first look into the lookup table.
     If the value of lookup table is not NULL, return that value
     Otherwise calculate the value and put the result in lookup table
  b) Bottom Up (Tabulation)
     Builds a table in bottom up fashion and returns the last entry from table
```
2. Optimal Substructure