# C++ - STL map

## std::map
```shell
typedef pair<const Key, T> value_type;
```
- Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
- key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key

## Container Properties
- Associative : Elements in associative containers are referenced by their key and not by their absolute position in the container
- Ordered : The elements in the container follow a strict order by its key at all times. 
- Map : Each element associates a key to a mapped value: Keys are meant to identify the elements whose main content is the mapped value
- Unique keys : No two elements in the container can have equivalent keys
- Allocator-aware : The container uses an allocator object to dynamically handle its storage needs

## Element Access
- std::map::operator[]

## map iterators
- random-access iteratos
- pointer가 가리키는 offset position에 대한 element들에 접근하는 방법 제공

### Example
```shell
#include <iostream>
#include <map>

using namespace std;

int main ()
{
	map<string, int> phonebook;
	map<string, int>::iterator it;

	phonebook.insert(pair<string, int>("Jang",12549384));
	phonebook.insert(pair<string, int>("Kim",91249434));
	phonebook.insert(pair<string, int>("Park",38431958));

	it = phonebook.find("Jang");

	if(it != phonebook.end())
	{
		cout << it->first << "=" << it->second << endl;
	}
}
```

## Reference
* [cplusplus](http://www.cplusplus.com/reference/map/map/)