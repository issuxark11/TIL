# Algorithm - Backtracking : N Quenn Problem

## N Queen Problem
- The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other.

## Naive Algorithm for N Queen Problem
- Generate all possible configurations of queens on board and print a configuration that satisfies the given constraints
```shell
while there are untried conflagrations
{
   generate the next configuration
   if queens don't attack in this configuration then
   {
      print this configuration;
   }
}
```

## Backtracking Algorithm for N Queen Problem
- The idea is to place queens one by one in different columns, starting from the leftmost column. 
- When we place a queen in a column, we check for clashes with already placed queens. 
- In the current column, if we find a row for which there is no clash, we mark this row and column as part of the solution. 
- If we do not find such a row due to clashes then we backtrack and return false
```shell
1) Start in the leftmost column
2) If all queens are placed
    return true
3) Try all rows in the current column.  Do following for every tried row.
    a) If the queen can be placed safely in this row then mark this [row, 
        column] as part of the solution and recursively check if placing  
        queen here leads to a solution.
    b) If placing queen in [row, column] leads to a solution then return 
        true.
    c) If placing queen doesn't lead to a solution then umark this [row, 
        column] (Backtrack) and go to step (a) to try other rows.
3) If all rows have been tried and nothing worked, return false to trigger 
    backtracking.
```

## Reference
- [geeksforgeeks](http://www.geeksforgeeks.org/backtracking-set-3-n-queen-problem/)