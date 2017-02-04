# Data Structure - Tree
## Reference
* 열혈강의 자료구조 / 윤성우 저
* 알고리즘 문제해결 전략 / 구종만 저

## 트리
- 계층적 구조를 갖는 자료들을 표현하기 위한 자료 구조
- 탐색형 자료구조 ex) 이진 검색 트리

## 트리의 구성 요소
- 트리는 자료가 저장된 노드들이 edge들로 서로 연결되어 있는 자료 구조
- 노드 간 상/하위 관계가 있음 : parent, child, sibling
- root node / leaf node
- depth : 루트에서 어떤 노드에 도달하기 위해 거쳐야 하는 edge의 수
- height : 루트에서 leaf node에 도달하기 위해 거쳐야 하는 edge의 수
- 재귀적 속성을 가짐 : subtree

## 트리의 표현
```shell
struct TreeNode 
{
    int element;
    TreeNode *parent;
    vector<TreeNode*> children; // 자손노드들을 가리키는 포인터 배열
}
```
