#include <iostream>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    map<string, int> phonebook;
	map<string, int>::iterator it;
 
    string name;
    int phoneNum; 

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> name >> phoneNum;
        
        it = phonebook.find(name);
        
        if( it == phonebook.end())
            phonebook.insert(pair<string, int>(name,phoneNum));
        else
            it->second = phoneNum;
    };
    
    for(int i = 0; i < T; i++)
    {
        cin >> name;
     
        it = phonebook.find(name);

	   if(it != phonebook.end()) {
		  cout << it->first << "=" << it->second << endl;
	   } 
       else {
           cout << "Not found" << endl;
       }
    }

    return 0;
}