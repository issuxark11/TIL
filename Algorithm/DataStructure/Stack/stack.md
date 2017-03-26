# Data Structure - Stack

## Stack
- Stack is a Linear Data Structure which follows a particular order in which theoperations are performed.
- LIFO(Last In First Out)

## Stack functions
- Push : Add an item in the stack
- Pop  : Remove an item from the stack
- Top(Peek)  : return top element of stack
- isEmpty : return true if stack is empty

## Implementation
- Array
- Linked Vector
- Vector(STL)

### Implementation - Vector
```shell
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class CVectorStack {
    vector<T> m_stack;
public:
    CVectorStack(void) {}
    ~CVectorStack(void) {}

    void push(T item) {
        m_stack.push_back(item);
    }
    T pop() {
        T retVal = m_stack.back();
        m_stack.pop_back();
        return retVal;
    }
    T getTop() {
        return m_stack.back();
    }
    int getSize() {
        return m_stack.size();
    }
};
```

## Reference
* [geeksforgeeks](http://quiz.geeksforgeeks.org/stack-data-structure/)