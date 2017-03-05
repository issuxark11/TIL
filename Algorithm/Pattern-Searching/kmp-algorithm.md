# Algorithm - Pattern Searching

## 2. KMP Algorithm
- KMP(Knuth Morris Pratt)
- Naive pattern searching algorithm 의 단점
```shell
Example
text = aaaaabaaaaacaaaaadaaaaae
pattern = aaaaak (bad case for naive)

위에서와 같이 일치했던 정보를 저장해두지 않기 때문에 비효율적이다. 일치하는 부분을 건너뛸수 있다면 좀더 효율적이 될 수 있다.
```
- KMP worst complexity O(n)
- 이미 mismatch 로 판단할 수 있는 부분에 대해서건너뛰고 searching 수행 
- whenever we detect a mismatch, we already know some of the characters in the text of next window

### KMP Preprocessing Overview
- KMP algorithm preprocesses pattern[] and constructs an auxiliary(보조자) lps[] of size m = pattern.length()
- lps[] indicates longest proper prefix which is also suffix
- whole substring is not considered (pattern 자기 자신 제외)
```shell
lps[i] = the longest proper prefix of pattern[0..i]
         which is also a suffix of pattern[0..i]
         suffix 이면서 가장 긴proper prefix 

* proper prefix : 자기 자신 제외
Example
S = "ABC"
prefixes of S are "A", "AB", "ABC"
proper prefiexes are "A", "AB"
```

### Prefix Array(접두사 배열)
- Prefix Array : 접두사들을 사전순으로 나열한 배열

### Suffix Array(접미사 배열)
- Suffix Array : 접미사들을 사전순으로 나열한 배열
```shell
Example
S = "banana"
S의suffix는 {"banana","anana","nana","ana","na","a"}
suffix array sfx[]를 구성하면
sfx[i]에는 각각의 부분 문자열의 시작 위치인 인덱스가 저장되어 있고 suffix array는 사전순으로 정렬 되어있음
sfx[0] = 5 ("a")
sfx[1] = 3 ("ana")
sfx[2] = 1 ("anana")
sfx[3] = 0 ("banana")
sfx[4] = 4 ("na")
sfx[5] = 2 ("nana")
```

## Reference
* [geeksforgeeks](http://www.geeksforgeeks.org/searching-for-patterns-set-1-naive-pattern-searching/)
* [wiki](https://en.wikipedia.org/wiki/Suffix_array)
