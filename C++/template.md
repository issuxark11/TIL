# C++ - Template
## Reference
* 열혈 C++ 프로그래밍 / 윤성우 저

## function & template
- function template : 함수를 만드는데 사용되는 템플릿
	template <typename T>
	T Add (T x, T y)
	{
		return x + y;
	}	

- template function : 함수 템플릿을 기반으로 컴파일러가 만들어 내는 함수

## class & template
- class template : 클래스를 만드는데 사용되는 템플릿
	template <typename T>
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

- 클래스 템플릿 기반 객체 생성에는 반드시 자료형 정보 명시
