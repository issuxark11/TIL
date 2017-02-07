# C++ - Keywords
## Reference
* 열혈 C++ 프로그래밍 / 윤성우 저

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