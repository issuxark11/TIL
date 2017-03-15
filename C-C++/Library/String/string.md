# C/C++ - String Library

## std::string
- String class
- Strings are objects that represent sequences of characters

### std::string member functions
- size(), length() : return length of string 
- resize() : resize string
- clear() : clear string
- empty() : is empty
- c_str() : get c string equivalent
- find() : find content in string, return start index
- insert() : insert into string
- substr() : generate substring

### std::string operators
- operator[] : get character of string
- operator= : string assignment
- operator+=, append(): append to string

## Examples
```shell
#include <iostream>       // std::cout
#include <string>         // std::string

using namespace std;

int main() {
	string str1 = "There are two needles. ";
	string str2 = "needles";
 
	cout << str1.find(str2) << endl;
 
	str1.append(str2);
	cout << str1 << endl;
 
 	str2.insert(2, "AB");
	cout << str2 << endl;

	string str3 = str2.substr(2,2);
	cout << str3 << endl;
	
	return 0;
}
```
```shell
# Output
14
There are two needles. needles
neABedles
AB
```
## Reference
*[cplusplus](http://www.cplusplus.com/reference/string/string/)