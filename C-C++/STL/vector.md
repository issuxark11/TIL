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
- erase() : erase elements

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

## Reference
* [cplusplus](http://www.cplusplus.com/reference/vector/)