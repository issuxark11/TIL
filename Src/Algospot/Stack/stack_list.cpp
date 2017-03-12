#include <list>
#include <iostream>
using namespace std;

template <typename T>
class CListStack {
    list<T> m_stack;
public:
    CListStack(void) {}
    ~CListStack(void) {}

    void push(T item) {
        m_stack.push_front(item);
    }
    T pop() {
        T retVal = m_stack.front();
        m_stack.pop_front();
        return retVal;
    }
    T getTop() {
        return m_stack.front();
    }
    int getSize() {
        return m_stack.size();
    }
};

// CListStack<int> myStack;
