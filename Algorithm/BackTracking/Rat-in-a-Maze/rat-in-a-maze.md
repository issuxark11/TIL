# Algorithm - Backtracking : Rat in a Maze

## Rat in a Maze
- A Maze is given as N*N binary matrix of blocks where source block is the upper left most block 
- A rat starts from source(maze[0][0]) and has to reach destination(maze[N-1][N-1]). The rat can move only in two directions: forward and down.
- In the maze matrix, 0 means the block is dead end and 1 means the block can be used in the path from source to destination.

## Naive Algorithm for Rat in a Maze
- The Naive Algorithm is to generate all paths from source to destination and one by one check if the generated path satisfies the constraints.
```shell
while there are untried paths
{
   generate the next path
   if this path has all blocks as 1
   {
      print this path;
   }
}
```

## Backtracking Algorithm for Rat in a Maze
```shell
If destination is reached
    print the solution matrix
Else
   a) Mark current cell in solution matrix as 1. 
   b) Move forward in horizontal direction and recursively check if this 
       move leads to a solution. 
   c) If the move chosen in the above step doesn't lead to a solution
       then move down and check if  this move leads to a solution. 
   d) If none of the above solutions work then unmark this cell as 0 
       (BACKTRACK) and return false.
```

## Reference
- [geeksforgeeks](http://www.geeksforgeeks.org/backttracking-set-2-rat-in-a-maze/)