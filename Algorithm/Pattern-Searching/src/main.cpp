#include <iostream>
#include "pattern-searching.h"

using namespace std;

int main()
{
	string text = "AABAACAADAABAAABAA";
	string pattern = "AABA";
	PatternMatchingNaive(text, pattern);
	return 0;
}
