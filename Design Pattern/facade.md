# Design Pattern - FACADE

## Structural Pattern

### Intention
- 서브시스템 내의 인터페이스 집합에 대해 하나의 인터페이스를 제공 
- 서브시스템을 사용하기 쉽도록 상위 수준의 인터페이스 정의 

### Motivation
- 시스템을 서브시스템으로 구조화하여 복잡성을 줄임 
- 서브시스템들 사이의 communication 과 dependency를 최소화 
- 서브시스템의 기능들에 대해 단순화된 하나의 인터페이스 제공 
- Facade 클래스는 외부에는 서브 시스템을 사용하는데 필요한 인터페이스만을 제공하고 내부적으로 서브시스템을 구성하는 기능을 구현하는 클래스들을 묶어주는 역할 

### Applicability
- 복잡한 서브시스템에 대한 단순한 인터페이스 제공이 필요할 때 활용 
- 서브시스템에 대한 기본적인 인터페이스 제공
- 서로 다른 서브시스템들 간의 결합도를 감소시킴
- 서브시스템 간의 Communication은 Facade를 통해서만 진행하여 서브시스템들 간의 종속성을 줄임
- 서브시스템 내부 설계 변경이 다른 서브시스템에 독립적이 됨  

### Participants
- Facade : 인터페이스를 제공하여 클라이언트의 요청을 해당 서브시스템 클래스에 전달
- Subsystem Classes : 서브시스템을 구성하는 실제 기능을 구현 및 실행 

### Collaborations
- Facade를 사용하는 클라이언트는 서브시스템을 구성하는 객체로 직접 접근하지 않고 Facade에 정의된 인터페이스를 이용 
- Facade는 서브시스템내 기능을 담당하는 클래스에 요청을 보내주기 위해 자신의 인터페이스에 동일한 작업을 정의 

### Consequences
1. 서브시스템의 구성요소를 보호
2. 서브시스템과 클라이언트 간 결합도를 낮춤 (Weak Coupling)
3. Facade를 사용할지 서브시스템 클래스를 직접 사용할지 클라이언트가 결정 가능

### SampleCode
```shell
class Facade 
{
public:
	void Initialize()
	{
		m_pTaskMgrInstance = CTaskMgr::GetInstance();
		m_pSendDataInstance = CSendData::GetInstance();
		m_pRcvDataInstance = CRcvData::GetInstance();	
	}

	CTaskMgr * GetTaskMgrInstance() {return m_pTaskMgrInstance;}
	CTaskMgr * GetSendDataInstance() {return m_pSendDataInstance;}
	CTaskMgr * GetRcvDataInstance() {return m_pRcvDataInstance;}	
}
private:
	Facade() {}
	~Facade() {}

	CTaskMgr * m_pTaskMgrInstance;
	CSendData * m_pSendDataInstance;
	CRcvData * m_pRcvDataInstance;
}

# 서브시스템을 구성하는 클래스들은 Singleton으로 구현
```

## Reference
- Design Patterns Elements of Reusable Object-Oriented Software / by Erich Gamma, Richard Helm, Ralph Johnson, Hone Vlissides0