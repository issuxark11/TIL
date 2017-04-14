# Algorithm - Dynamic Programming (Matrix Chain Multiplication)

## Matrix Chain Multiplication
- Given a sequence of matrices, find the most efficient way to multiply these matrices together. 
- The problem is not actually to perform the multiplications, but merely to decide in which order to perform the multiplications.
- There are many options to multiply a chain of matrices because matrix multiplication is associative. 
- 곱센 연산 순서에 따라 연산량이 달라짐 ( A(BC) = (AB)C )

### Input
Given an array p[] which represents the chain of matrices such that the ith matrix Ai is of dimension p[i-1] x p[i]. 

### Output
We need to write a function MatrixChainOrder() that should return the minimum number of multiplications needed to multiply the chain.

### Examples
```shell
Input: p[] = {40, 20, 30, 10, 30}   
Output: 26000  
There are 4 matrices of dimensions 40x20, 20x30, 30x10 and 10x30.
Let the input 4 matrices be A, B, C and D.  The minimum number of 
multiplications are obtained by putting parenthesis in following way
(A(BC))D --> 20*30*10 + 40*20*10 + 40*10*30

Input: p[] = {10, 20, 30, 40, 30} 
Output: 30000 
There are 4 matrices of dimensions 10x20, 20x30, 30x40 and 40x30. 
Let the input 4 matrices be A, B, C and D.  The minimum number of 
multiplications are obtained by putting parenthesis in following way
((AB)C)D --> 10*20*30 + 10*30*40 + 10*40*30

Input: p[] = {10, 20, 30}  
Output: 6000  
There are only two matrices of dimensions 10x20 and 20x30. So there 
is only one way to multiply the matrices, cost of which is 10*20*30
```

## Solution
```shell
A simple solution is to place parenthesis at all possible places, calculate the cost for each placement and return the minimum value. 

1) Optimal Substructure:
In a chain of matrices of size n, we can place the first set of parenthesis in n-1 ways. 
For example, if the given chain is of 4 matrices. let the chain be ABCD, then there are 3 ways to place first set of parenthesis outer side: (A)(BCD), (AB)(CD) and (ABC)(D). 
So when we place a set of parenthesis, we divide the problem into subproblems of smaller size. 
Therefore, the problem has optimal substructure property and can be easily solved using recursion.
Minimum number of multiplication needed to multiply a chain of size n = Minimum of all n-1 placements (these placements create subproblems of smaller size)

2) Overlapping Subproblems

```

### Recursive Implementation
```shell
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
int MatrixChainOrder(int p[], int i, int j)
{
    if(i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
 
    // place parenthesis at different places between first
    // and last matrix, recursively calculate count of
    // multiplications for each parenthesis placement and
    // return the minimum count
    for (k = i; k <j; k++)
    {
        count = MatrixChainOrder(p, i, k) +
                MatrixChainOrder(p, k+1, j) +
                p[i-1]*p[k]*p[j];
 
        if (count < min)
            min = count;
    }
 
    // Return minimum count
    return min;
}
```

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/dynamic-programming-set-8-matrix-chain-multiplication/)