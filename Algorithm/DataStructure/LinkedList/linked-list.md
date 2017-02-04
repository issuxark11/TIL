# Data Structure - Linked List
## Reference
* 알고리즘 문제해결 전략 / 구종만 저

## Linked List
- 특정 위치에서의 삽입과 삭제가 상수 시간에 가능
- 원소들이 메모리 여기저기 흩어져 있고 각 노드들을 연결하기 위한 포인터를 가짐
```shell
struct ListNode 
{
    int element;
    ListNode *prev, *next;
}
```
- i번째 노드를 찾는데 드는 시간은 리스트 길이에 비례
- 삽입/삭제가 간편 : 삽입/삭제할 노드와 이전/이후 노드의 포인터만 바꾸면 됨
- 큐와 스택, 데크를 구현하는데 편리
- 연결리스트 양쪽에서 추가와 삭제를 모두 상수시간에 가능


