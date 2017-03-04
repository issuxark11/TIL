# C++ - Keywords

## inline vs  macro
### C - macro function
- 실행속도의 이점
- 복잡한 함수 정의시 한계 
- 전처리 단계에서 함수의 호출문을 함수 선언으로 대체
```shell
# Example
#define SQUARE(x) ((x)*(x))
```
### C++ inline function
- 컴파일러에 의해 처리 
- 자료형에 의존적 : 컴파일러가 타입 체크

## static
### C static
- 전역변수에 선언시 선언된 파일 내에서만 참조를 허용하겠다는 의미
- 함수 내 선언시 한번만 초기화 되고 함수 리턴시에도 소멸 되지 않음 

### C++ static
```shell
# static 멤버 변수(클래스 변수)
  - 클래스당 하나씩만 생성됨 
  - 새로운 객체를 생성해도 메모리 공간에 하나만 할당이 되어 공유되는 변수
  - static 맴버변수는 생성자에서 초기화 하지 않고 별도로 초기화

# static 멤버 함수 
  - 선언된 클래스의 모든 객체가 공유
  - 객체의 맴버로 존재하는 것이 아님 
  - static 멤버함수 내에서는 static 멤버변수와 static 함수만 호출 가능 
  - 대부분의 경우 전역변수와 전역 함수 대체 가능 
```

## explicit



## Reference
* 열혈 C++ 프로그래밍 / 윤성우 저