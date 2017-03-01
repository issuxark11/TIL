# gcc

## gcc introduction
- #gcc -v // gcc 버전
- 기본적으로 PATH 환경변수에 있는 디렉토리에서 실행파일을 찾음
- o option : 출력 파일명을 정함
- c option : compile 만 진행
- l option : include path 지정
```shell
include <> : /usr/include 기준
include "" : 현재 디렉토리 기준
           : -ㅣ<디렉토리>
Example
#gcc -c main.c -linclude // -l 바로 다음에 붙여씀 
```

## compile 과정
1. 컴파일 (.c -> .o)  : cc1
2. 링크 (.o -> a.out) : ld (linker)

## C++ 컴파일
- #apt-get install g++  // c++ 컴파일러 설치
- g++ -W -Wall -o2 -o test main.cpp
- -W -Wall : warning 까지 출력

## Reference
-[gcc 강좌](https://wiki.kldp.org/KoreanDoc/html/gcc_and_make/gcc_and_make.html#toc1)
