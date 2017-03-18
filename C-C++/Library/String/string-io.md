# C/C++ - String input/output

## std::getline(string)
- istream& getline (istream&  is, string& str);
- Extracts characters from istream and stores them into str untile the delimitation character('\n') is found

## Examples
```shell
#include <iostream>      

using namespace std;

int main() {
	string str;

	getline(cin >> ws, str);  // ws : remove whitespace
	
	return 0;
}
```

## Reference
*[cplusplus](http://www.cplusplus.com/reference/string/string/getline)