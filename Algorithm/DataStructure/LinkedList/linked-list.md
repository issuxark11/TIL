# Data Structure - Linked List

## 연결리스트
- Linear data structure
- 특정 위치에서의 삽입과 삭제가 상수 시간에 가능
- 원소들이 메모리 여기저기 흩어져 있고 각 노드들을 연결하기 위한 포인터를 가짐. not stored at continous location
- i번째 노드를 찾는데 드는 시간은 리스트 길이에 비례
- 삽입/삭제가 간편 : 삽입/삭제할 노드와 이전/이후 노드의 포인터만 바꾸면 됨
- 큐와 스택, 데크를 구현하는데 편리
- 연결리스트 양쪽에서 추가와 삭제를 모두 상수시간에 가능

## 연결리스트 표현
```shell
1) data
2) pointer to the next node

struct ListNode 
{
    int element; 
    ListNode *prev, *next;
}
```

## Advantages of Linked List over arrays
- Dynamic Size
- Easy Insert/Delete operation 

## Drawbacks of Linked List
- Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists.
- Extra memory space for a pointer is required with each element of the list.

## Operations

### Insert
```shell
Node* insert(Node *head,int data)
{
    //Complete this method
    Node * tmpNode = head;
    Node * newNode = new Node(data);
    newNode->next = NULL;
         
    if(head == NULL) {
        head = newNode;
    } else {
        while(tmpNode->next != NULL) {
            tmpNode = tmpNode->next;
        }
        newNode->next = tmpNode->next;
        tmpNode->next = newNode;
    }
          
    return head;
}

```

## Implementation
```shell
class Node {
public:    
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
}

class LinkedList {
public:
    // Operations
    Node* insert(Node* head, int data);
    
}
```

## Reference
* [geeksforgeeks](http://www.courses.geeksforgeeks.org/course/3/2/1/)
* [hackerrank](https://www.hackerrank.com/challenges/30-linked-list/tutorial)
* 알고리즘 문제 해결 전략 (구종만) / 인사이트