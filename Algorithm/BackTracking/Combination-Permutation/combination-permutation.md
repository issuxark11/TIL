# Algorithm - Brute Force : Combination & Permutation

## 4 possible cases
1. Combinations without repetitions/replacements 같은것이 없는 경우 조합
2. Combinations with repetitions/replacements 같은것이 있는 경우 조합
3. Permutations without repetitions/replacements  같은것이 없는 경우 순열 
4. Permutations with repetitions/replacements 같은것이 있는 경우 순열

## Combination (조합)
- n개의 원소로 된 집합 M에서 중복을 허락하지 않고 순서에 상관없이 r개를 고르는 방법 nCr
- r개의 반복문으로 해결 가능 
- 재귀함수 구현 

## Permutation (순열)
- A permutation, also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself
- n개의 원소로 된 집합 M에서 r개를 중복없이 골라 순서에 상관있게 나열하는 방법 nPr
- 재귀함수 구현 
- A string of length n has n! permutation  

## Reference
- 알고리즘 문제 해결 전략 (구종만) / 인사이트
- [geeksforgeeks](http://www.geeksforgeeks.org/combinations-with-repetitions/)