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
- iterator
- iterator를 통한 access가 속도면에서 유리

## vector iterators
- random-access iteratos
- pointer가 가리키는 offset position에 대한 element들에 접근하는 방법 제공
```shell
Example

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

## Reference
* [geeksforgeeks](http://www.cplusplus.com/reference/vector/)