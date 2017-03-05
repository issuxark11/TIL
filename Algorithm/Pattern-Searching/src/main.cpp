#include <iostream>
#include "pattern-searching.h"

using namespace std;

int main()
{
	CPatternSearching* pPatternObj = new CPatternSearching();

	string text = "AABAACAADAABAAABAA";
	string pattern = "AABA";
	pPatternObj->PatternMatchingNaive(text, pattern);
	return 0;
}
