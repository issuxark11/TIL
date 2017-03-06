# Algorithm - Greedy Approach 

## Introduction
- 각 단계마다 지금 당장 가장 좋은 방법만을 선택
- Choose the next piece that offers the most obvious and immediate benefit
- 지금의 선택이 남은 선택들에 어떤 영향을 끼칠지는 고려하지 않음
```shell
	1. 탐욕법을 사용해도 항상 최적해를 구할 수 있는 문제  (used for optimization problem)
	Optimization problem can be solved using Greedy if the problem has the following property : 
	At every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem.
	2. 시간이나 공간적 제약으로 인해 다른 방법으로 최적해를 찾기 어려울 때 근사해를 찾는 것으로 타협. 최적은 아니지만 임의의 답보다는 좋은 답을 구하는 용도로 사용
```	
- 탐욕적 알고리즘 연습 문제를 풀 때는 알고리즘의 정당성을 증명하는 과정을 빼먹지 않고 연습!!

## Greedy Algorithm Examples
- Kruskal's Minimum Spanning Tree (MST)
- Prim's Minimun Spanning Tree
- Dijkstra's Shortest Path
- Huffman Coding

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/fundamentals-of-algorithms/)
* 알고리즘 문제 해결 전략 (구종만) / 인사이트