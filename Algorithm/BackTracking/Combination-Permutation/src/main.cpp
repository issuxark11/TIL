#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> vec;

void Permutation(string& i_str, int i_iStartIdx, int i_iEndIdx) 
{
    if(i_iStartIdx == i_iEndIdx)
    {
        vec.push_back(i_str);
    }
    else
    {
        for(int i = i_iStartIdx; i <= i_iEndIdx; i++)
        {
            swap(i_str[i_iStartIdx], i_str[i]);
            Permutation(i_str, i_iStartIdx+1, i_iEndIdx);
            swap(i_str[i_iStartIdx], i_str[i]);
        }    
    }
}

void PermutationLexicographical(string& i_str)
{
    vec.clear();
	Permutation(i_str, 0, i_str.size()-1);
    
    sort(vec.begin(), vec.end());
	for(vector<string>::iterator it = vec.begin(); it != vec.end(); it++)
	{
	    cout << *it << " ";
	}
}

int main() {
	//code
	int T;
	string str;
	
	cin >> T;
	
	while(T-- >0)
	{
	    cin >> str;
	    PermutationLexicographical(str);
	    cout << endl;
	}
	return 0;
}