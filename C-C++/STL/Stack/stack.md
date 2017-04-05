# C++ - STL stack

## std::stack
- LIFO stack
- Stacks are a type of container adaptor, specifically designed to operate in a LIFO context.
- Elements are inserted and extracted only from one end of the container.
- Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

## stack constructor

### Example
```shell
#include <iostream>
#include <stack>
#include <vector>
#include <deque>

using namespace std;

int main ()
{
	std::deque<int> mydeque (3,100);          // deque with 3 elements
  	std::vector<int> myvector (2,200);        // vector with 2 elements

	// 1. default constructor, empty stack
	stack<int> first; 

	// 2. stack initialized to copy of deque
	stack<int> second (mydeque);

	// 3. empty stack using vector
	std::stack<int,std::vector<int> > third;

	// 4. 
	std::stack<int,std::vector<int> > fourth (myvector);

}
```

## Member functions
- (constructor)
- (destructor)
- operator= : Assign content
- size() : Return size
- empty() : Return IsEmpty
- top() : Access next element
- push() : Insert element
- pop()  : Delete top Element
- swap() : swap contents
```shell
std::stack<int> foo, bar;
foo.push(10);
foo.push(20);
foo.push(30);

bar.push(111);
bar.push(222);

foo.swap(bar);
swap(foo, bar);

```

## Reference
* [cplusplus](http://www.cplusplus.com/reference/stack/)