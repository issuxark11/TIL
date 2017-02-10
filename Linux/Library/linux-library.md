# Linux - Library

## 라이브러리 
- object 파일들을 하나로 묶은 것 

##  정적 라이브러리 (static library)
- 실행파일에 완전히 포함되는 형식  
- [NAME].a
- 단순한 오브젝트들의 모음 

```shell
#Example
* example 라이브러리 생성 
# ar rc libexample.a ex1.o ex2.o ex3.o

* 라이브러리 링크 
# gcc -o exam main.c -L./directory -lexample
-L 옵션 : 라이브러리가 있는 디렉토리의 위치
-l  옵션 :  라이브러리의 이름 [lib 와 .a 를 제외]   
```

## 공유 라이브러리
- 실행파일에 붙지 않고 다른 모든 프로그램이 공유해서 사용할 수 있는 라이브러리 
- 실행시 공유 라이브러리를 호출해서 사용 

```shell
#Example
* 오브젝트 파일 생성
# gcc -fPIC -c ex1.c ex2.c ex3.c
* 공유라이브러리 파일 생성
# gcc -shared -W1, -soname, libexample.so.1 -o libexample.so.1.0.1 ex1.o ex2.o ex3.o
* 라이브러리 링크파일 생성
# ln -s libexample.so.1.0.1 libexample.so
* 라이브러리 링크 
# gcc -o exam main.c -L./directory -lexample
* 라이브러리 경로 추가
# export LD_LIBRARY_PATH=./:/home/myhome/lib
```