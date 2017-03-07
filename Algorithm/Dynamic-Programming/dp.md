# Algorithm - Dynamic Programming Introduction

## Introduction
* Use when sub-problems are evaluated many times (e.g 점화식)
* Solving complex problem by breaking it into subproblems and stores the results of subproblems to avoid computing the same results again.

## Properties
### 1. Overapping Subproblems
- results of subproblems are stored in a table
- reuse sotred value instead of computing subproblems again
- Two ways to store the results
```shell
  a) Top Down (Memoization)
     First, initialize lookup table with all initial values as NULL
     Before computing solutions, looks into lookup table
     If the value of lookup table is not NULL, return that value
     Otherwise calculate the value and put the result in lookup table
```
```shell
Example - Fibonacci

int lookup[MAX];

/* 1. lookup 테이블 NULL로 초기화 */

/* fibbo(n) 을 계산하기전 lookup 테이블 검색 */
int fibbo(int n)
{
	/* lookup[n]이 NULL 이면 lookup[n] 계산 */
	if(lookup[n] == NULL)
	{
		if(n <= 1)
			lookup[n] = n;
		else
			lookup[n] = fibbo(n-1) + fibbo(n-2);
	}

	return lookup[n];
}
```
```shell
  b) Bottom Up (Tabulation)
     Builds a table in bottom up fashion and returns the last entry from table
     Build the solutions of subproblems bottom-up
```
```shell
Example - Fibonacci

int fibbo(int n)
{
	int f[n+1];
	int i;
  	
  	f[0] = 0;   
  	f[1] = 1; 
	
	for (i = 2; i <= n; i++)
    {
    	f[i] = f[i-1] + f[i-2];
    }	
 
  return f[n];
}
```
### 2. Optimal Substructure
- A given problems has Optimal Substructure Property if optimal solution of the given problem can be obtained by using optimal solutions of its subproblems
- divide all set solutions in n sets

## Examples
- Fibonacci

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/fundamentals-of-algorithms/)
