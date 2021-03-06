# Algorithm - Dynamic Programming(동적 계획법)

## Introduction
- 문제를 여러개의 sub-problem 들로 나누어 해결. (divide-and-conquer 와 같은 접근 방식)
- Use when sub-problems are evaluated many times. (divide-and-conquer 와 차이점)
- Solving complex problem by breaking it into subproblems and stores the results of subproblems to avoid computing the same results again. (sub-problem 의 계산 결과를 저장해두고 재활용)
- baseline 이 여러번 중복되는 경우 반복되는 부분 문제들의 답을 저장해두어 최적화를 위해 사용 (속도 향상)

## Properties
### 1. Overapping Subproblems (중복되는 부분 문제)
- results of subproblems are stored in a table (각 문제의 답을 저장)
- reuse sotred value instead of computing subproblems again (재활용)
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
- divide all set solutions in n sets  ex) 동전 Sn 을 포함하는 경우와 포함하지 않는 경우로 나눔

## Dynamic Programming VS Greedy
- dp : 모든 상황을 고려. 시간상 오래걸림
- greedy : 항상 최적해를 보장하지 않음. 시간적 효율성

## BackTracking
- 점화식, 백트래킹과 연관
- 점화식, 백트래킹 알고리즘 사용시 불필요한 중복 계산, 함수호출을 줄일 수 있음 -> 최적화 가능

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/fundamentals-of-algorithms/)
* 알고리즘 문제 해결 전략 (구종만) / 인사이트