# C++ - Copy Constructor

## Copy Constructor
- 복사 생성자의 매개변수는 반드시 참조형
```shell
#Example

class Ccopycon
{
public:
	Ccopycon(const Ccopycon & copy) : a(copy.a) {}

private:
	int a;
}

```

## Default Copy Constructor
- 복사 생성자를 정의하지 않으면, 멤버 대 멤버의 복사를 진행하는 디폴트 복사 생성자가 자동으로 삽입 
- explicit 선언을 통해 대입 연산자를 이용한 객체의 생성 및 초기화를 막을 수 있다.