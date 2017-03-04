# Algorithm - Pattern Searching

## Pattern Searching Introduction
- When we do search for a string in notepad/word file or browser or database, pattern searching algorithms are used to show the search results

## 1. Naive Pattern Searching
- O(m(n-m+1))
```shell
void Search(char * text, char * pattern)
	
for (int i = 0; i <= N - M; i++)
{
        int j;
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
	 
        if (j == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
           printf("Pattern found at index %d \n", i);
   }
```

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/searching-for-patterns-set-1-naive-pattern-searching/)
