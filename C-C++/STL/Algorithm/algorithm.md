# C++ - STL <algorithm>

## std::sort
- Sorts the elements in the range [first,last) into ascending/descending order
- default : void sort (RandomAccessIterator first, RandomAccessIterator last);
- custom  : void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);

### Example
```shell
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

bool ascending_comp (int i, int j) { return (i < j); }
bool descending_comp (int i, int j) { return (i > j); }

int main()
{
	int arrInts[] = {32,71,12,45,26,80,53,33};
  	vector<int> myvec (arrInts, arrInts + 8);
	
	// default
	sort(myvec.begin(), myvec.end());

	// custom - descending order
	sort(myvec.begin(), myvec.end(), descending_comp);


	return 0;
}

```

## std::reverse
- Reverses the order of the elements in the range [first,last)
- reverse(myvec.begin(), myvec.end());

## Reference
* [cplusplus](http://www.cplusplus.com/reference/algorithm/)