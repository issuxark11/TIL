#ifndef PATTERN_SEARCHING_H
#define PATTERN_SEARCHING_H

#include <iostream>

using namespace std;

class CPatternSearching
{
public:
	CPatternSearching(){};
	~CPatternSearching(){};

	/* naive pattern searching (exhaustive search) */
	void PatternMatchingNaive(string &text, string& pattern);

};

/* naive pattern searching (exhaustive search) */
void CPatternSearching::PatternMatchingNaive(string &text, string& pattern)
{
    int m = static_cast<int>(pattern.size());
	int n = static_cast<int>(text.size());
	cout << m << ", " << n << endl;
							
	for(int i = 0; i <= n - m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(text[i+j] != pattern[j])
			{
				break;
			}
			
			if(j == m-1)
			{														    	cout << "Pattern found at index " << i << endl;
			}
		}
	}
}

#endif
