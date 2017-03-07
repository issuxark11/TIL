# Algorithm - Greedy Algorithm (Activity Selection Problem)

## Activity Selection Problem
```shell
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

# Solution
1. 종료 시간 순으로 Activity Sorting
2. Sorting 후 첫번째 Activity 출력
3. 겹치는 Activity 제거 후 종료시간 순으로 첫번째 Activity 출력
4. 반복

# Time Complexity
Activity 가 sorting 되어 있는 경우 O(n)
sorting 해야 하는 경우 O(nlogn)
```

```shell
# Example
회의실 예약 : 겹치지 않는 회의들만을 골라 내 진행. 최대 몇 개나 선택 가능할까?
길이와 관계없이 가장 먼저 끝나는 회의부터 선택 / 가장 먼저 끝나는 회의를 선택 후 겹치는 것들은 지움
	1. 목록 S 에 남은 회의 중 가장 일찍 끝나는 회의 S_min 을 선택
	2. S_min 과 겹치는 회의를 S에서 모두 지운다
	3. S가 빌 때까지 반복
```

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/fundamentals-of-algorithms/)