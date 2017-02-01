# C++ - Template
## Reference
* 열혈 C++ 프로그래밍 / 윤성우 저

## function & template
- function template : 함수를 만드는데 사용되는 템플릿
```shell
#Example
template <typename T>
T Add (T x, T y)
{
	return x + y;
}	

template <typename T1, typename T2>
void Print(T1 x, T2 y)
{
	cout << x << ", " << y << endl;	
}

int main(void)
{
	Print<double, int>(1.02, 4);
	Print<char, double>('A',2.34);
}
```

- template function : 함수 템플릿을 기반으로 컴파일러가 만들어 내는 함수
- specialization of function template : 템플릿 함수 구성방법에 예외처리
```shell
#Example
template <>
int Sum<int> (int x, int y) // int 형 템플릿 함수가 필요한 경우 호출
{
	return x+y; 
}
```

## class & template
- class template : 클래스를 만드는데 사용되는 템플릿
```shell
#Example
template <class T>
class Point
{
	public:
		Point(T x, T y) : m_x(x), m_y(y) {} 

	private:
		T m_x, m_y;
}

int main(void)
{
	Point<int> p1(3,4); // 자료형 정보 명시 
}
```
- 클래스 템플릿 기반 객체 생성에는 반드시 자료형 정보 명시
- template class : 클래스 템플릿을 기반으로 만들어지는 클래스
- 헤더파일에 클래스 템플릿의 생성자와 멤버함수 정의를 모두 넣는다.

