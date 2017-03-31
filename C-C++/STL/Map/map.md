# C++ - STL <map>

## std::map
- Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
- key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key
```shell
typedef pair<const Key, T> value_type;
```

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
- empty() : Return IsEmpty
### Element access
- operator[] : Access element
### Modifiers
- insert() : Insert elements
```shell
void add_value(map<int,int> &m,int x,int y)
{
    //Your code here
	map<int, int>::iterator it;
	it = m.find(x);

	if(it == m.end())
		m.insert(pair<int,int>(x,y));
	else
		it->second = y;
}

```
- erase() : Erase elements
```shell
// 1. erasing by iterator
it=mymap.find('b');
mymap.erase (it);

// 2. erasing by key
mymap.erase('c');

// 3. erasing by range
it=mymap.find('e');
mymap.erase(it, mymap.end());

```
- clear() : Clear elements
```shell
mymap.clear();

```
- swap() : Exchange contents of vectors
```shell
std::map<int, int> foo, bar;

foo[2] = 50;
foo[5] = 70;
bar[1] = 10;
bar[2] = 20;
bar[3] = 30;

foo.swap(bar);

```
### Operations
- find() : Get iterator to element
```shell
/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
	//Your code here
	int iReturn = 0;

	map<int, int>::iterator it;
	it = m.find(x);

	if(it != m.end())
		iReturn = it->second;
	else
		iReturn = -1;

	return iReturn;
}

```

## Reference
* [cplusplus](http://www.cplusplus.com/reference/map/map/)