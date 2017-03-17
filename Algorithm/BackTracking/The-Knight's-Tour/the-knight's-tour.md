# Algorithm - Backtracking : The Knight's tour Problem

## Backtracking problem 적용하기 좋은 문제들의 property
- These problems can only be solved by trying every possible configuration and each configuration is tried only once
- A Naive solution for these problems is to try all configurations and output a configuration that follows given problem constraints
- Backtracking works in incremental way and is an optimization over the Naive solution where all possible configurations are generated and tried

## The Knight's Tour Problem
- The knight is placed on the first block of an empty board and, moving according to the rules of chess, must visit each square exactly once

## Naive Algorithm for Knight's tour
- The Naive Algorithm is to generate all tours one by one and check if the generated tour satisfies the constraints
```shell
while there are untried tours
{ 
   generate the next tour 
   if this tour covers all squares 
   { 
      print this path;
   }
}
```

## Backtracking for Knight's tour
- When we add an item, we check if adding the current item violates the problem constraint, if it does then we remove the item and try other alternatives
- If none of the alternatives work out then we go to previous stage and remove the item added in the previous stage
- If we reach the initial stage back then we say that no solution exists
- If adding an item doesn’t violate constraints then we recursively add items one by one
- If the solution vector becomes complete then we print the solution
```shell
If all squares are visited 
    print the solution
Else
   a) Add one of the next moves to solution vector and recursively 
   check if this move leads to a solution. (A Knight can make maximum 
   eight moves. We choose one of the 8 moves in this step).
   b) If the move chosen in the above step doesn't lead to a solution
   then remove this move from the solution vector and try other 
   alternative moves.
   c) If none of the alternatives work then return false (Returning false 
   will remove the previously added item in recursion and if false is 
   returned by the initial call of recursion then "no solution exists" )
```

## Reference
- [geeksforgeeks](http://http://www.geeksforgeeks.org/backtracking-set-1-the-knights-tour-problem/)