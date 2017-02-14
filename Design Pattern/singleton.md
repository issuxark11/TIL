# Design Pattern - Singleton

## Creational Pattern

### Intention
- 단 하나의 클래스 인스턴스만 갖도록 보장  
- 쉽게 접근하기 위한 수단 제공,  provide a global access point

### Motivation
- 단 하나의 인스턴스만 가져야 하는 경우 
- 클래스 자신이 다른 인스턴스가 생성되지 않도록 제한하고 그 인스턴스에 대한 접근 방법을 제공 

### Applicability
- 클래스의 인스턴스가 하나임을 보장하고 모든 클라이언트가 접근 가능하도록 access point를 제공해야 할 때 

### Participants
- Singleton : Instance() 연산을 정의하여 유일한 인스턴스로 접근할 수 있도록 함 

### Collaborations
- 클라이언트는 Singleton 클래스에 정의된 Instance() 연산을 통해 유일한 인스턴스에 접근 

### Consequences
1. Control access to instance
2. 전역변수를 사용하지 않아도 됨
3. 
4. 인스턴스의 개수를 자유롭게 변경 가능 
5.

### SampleCode
```shell
class CSingleton
{
public:
	static CSingleton * Instance();

protected:
	CSingleton() {}
	~CSingleton() {}

private:
	static CSingleton * m_instance;
}

CSingleton * CSingleton::m_instance = NULL;

CSingleton * CSingleton::Instance() 
{
	if(m_instance == NULL)
		m_instance = new CSingleton();

	return m_instance;
}

```

## Reference
- Design Patterns Elements of Reusable Object-Oriented Software / by Erich Gamma, Richard Helm, Ralph Johnson, Hone Vlissides0