#include <iostream>
using namespace std;

void PatternMatchingNaive(string &text, string& pattern)
{
    bool bMatching = false;
    int m = static_cast<int>(pattern.size());
	int n = static_cast<int>(text.size());
							
	for(int i = 0; i <= n - m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(text[i+j] != pattern[j])
			{
				break;
			}
			
			if(j == m-1)
			{		
			    bMatching = true;
			}
		}
	}
	
	if(bMatching)
	{
	    cout << "found" << endl;
	}
	else
	{
	    cout << "not found" << endl;
	}
}

int main() {
	//code
	string text;
	string pattern;
	
	int T;
	
	cin >> T;
	
	while(T-- > 0)
	{
	    cin >> text >> pattern;
	  
	  PatternMatchingNaive(text, pattern);
	}
	
	return 0;
}