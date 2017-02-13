# Data Structure - Graph

## 그래프
- 객체들의 상호 관계를 표현하기 위한 자료 구조
- 현실 세계의 사물이나 추상적인 개념 간의 연결 관계를 표현

## 그래프의 구성 요소
- 그래프 G(V,E)
- 그래프는는 어떤 자료나 개념을 표현하는 Vertex 들의 집합 V와 이들을 연결하는 edge 들의 집합 E로 구성되어 있는 자료 구조

## 그래프의 종료
- directed graph
- undirected graph
- weighted graph : edge에 가중치 속성을 부여
- multigraph : 두 vertex 사이에 두 개 이상의 edge 존재 가능
- directed acyclic graph : 사이클 없는 방향 그래프

## 그래프의 표현
- 그래프는 트리에비해 추가/삭제가 자주 일어나지 않음
- 대부분의 경우 그래프는 구조의 변경이 어렵더라도 좀더 간단하고 메모리를 적게 차지하는 방법으로 구현
- 배열에 각 Vertex의 정보 저장
- 인접 리스트 (adjacency list)
```shell
# 각 vertex 마다 하나의 연결 리스트를 가짐
# 연결 리스트는 해당 vertex에 대한 edge의 목록을 저장
vector<list<int>> adjacent;
```
-

## Reference
* 열혈강의 자료구조 / 윤성우 저
* 알고리즘 문제해결 전략 / 구종만 저