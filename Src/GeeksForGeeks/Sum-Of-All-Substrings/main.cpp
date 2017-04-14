// http://practice.geeksforgeeks.org/problems/sum-of-all-substrings-of-a-number/0

#include <iostream>
#include <cstring>
using namespace std;

int GetSumOfAllSubstrings(string & str) {

    int iSumOfAllSubstrings = 0;
    string strTmp;
    
    //cout << str.size() << endl;
    for(int i = 0; i < str.size(); i++) 
    {
        for(int j = i; j < str.size(); j++)
        {
            strTmp = str.substr(i, j-i+1);
            //cout << i << "," << j << ":" <<strTmp << endl;
            iSumOfAllSubstrings += stoi(strTmp);
        }
    }

    return iSumOfAllSubstrings;
}

int main() {
	//code
	int T;
	string str;
	
	cin >> T;
	while(T-- > 0) {
	    cin >> str;
	    int result = GetSumOfAllSubstrings(str);
	    cout << result << endl;
	}
	
	return 0;
}