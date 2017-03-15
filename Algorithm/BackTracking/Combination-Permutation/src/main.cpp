#include <iostream>

using namespace std;

void Permutation(string& i_str, int i_iStartIdx, int i_iEndIdx) 
{
    if(i_iStartIdx == i_iEndIdx)
    {
        cout << i_str << " ";
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

int main() {
	//code
	int T;
	string str;
	
	cin >> T;
	
	while(T-- >0)
	{
	    cin >> str;
	    Permutation(str, 0, str.size()-1);
	    cout << endl;
	}
	return 0;
}