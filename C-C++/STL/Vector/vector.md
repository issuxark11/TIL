# C++ - STL vector

## std::vector
- Sequence containers : 원소들이 메모리 상에 연속적으로 저장
- Representing arrays that can change in size

## Container Properties
- Sequence : 원소 insert/erase 시 고비용
- Dynamic array
- Random Access Iterator

## Element Access
- std::vector::operator[]
- iterator : iterator를 통한 access가 속도면에서 유리
- front() : Access first element
- back() : Access last element

## Modifiers
- push_back() : Add element at the end
- pop_back()  : Delete last Element
- erase() : Erase elements
- clear() : Clear elements

## vector iterators
- random-access iteratos
- pointer가 가리키는 offset position에 대한 element들에 접근하는 방법 제공

### Example
```shell
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}

```

## vector constructor

### Example
```shell
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	// 1. default constructor;
	vector<int> first; 

	// 2. 100 인 element 4개 보관 
	vector<int> second(4, 100);

	// 3. second의 처음에서 끝으로 생성 
	vector<int> third(second.begin(), second.begin());

	// 4. third 복사해서 생성  
	vector<int> fourth(third);

	// 5. 배열을 통해 생성
	int arrInt[] = {16, 2, 77, 29};
	vector<int> fifth (arrInt, arrInt + sizeof(arrInt) / sizeof(Int)); 

	// 6. 2-dimension
	vector<vector<bool>> result(5, vector<bool>(5, false));
}
```

## Member functions
- (constructor)
- (destructor)
- operator= : Assign content
### Iterators
- begin() : Return iterator to beginning
- end() : Return iterator to end
- rbegin() : Return reverse iterator to reverse beginning
- rend() : Return reverse iterator to reverse end
### Capacity
- size() : Return size
- resize() : Change size
- empty() : Return IsEmpty
- shrink_to_fit() : Requests the container to reduce its capacity to fit its size
### Element access
- operator[] : Access element
- front() : Access first element
- back() : Access last element
### Modifiers
- push_back() : Add element at the end
- pop_back()  : Delete last Element
- erase() : Erase elements
```shell
// erase the 6th element
myvector.erase (myvector.begin()+5);

// erase the first 3 elements:
myvector.erase (myvector.begin(),myvector.begin()+3);

```
- clear() : Clear elements
```shell
myvector.clear();

```
- swap() : Exchange contents of vectors
```shell
std::vector<int> foo (3,100);   // three ints with a value of 100
std::vector<int> bar (5,200);   // five ints with a value of 200

foo.swap(bar);

```

## Reference
* [cplusplus](http://www.cplusplus.com/reference/vector/)