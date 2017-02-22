#POSIX Thread

## Keywords
- asynchronous(비동기성) : 두 개의 작업이 서로 의존성이 없을경우 독립적으로 발생/진행될 수 있을 때 두 작업을 비동기적(asynchronous)라 함
- mutex : POSIX 쓰레드의 기본적인 동기화를 위한 객체
- conditional variable : 조건 변수, POSIX 쓰레드가 제공. 조건변수를 사용하여 공유 데이터 상태의 변화에 대해 시그널을 보내거나 브로드캐스트 가능
- concurrency : 작업들이 무작위 순서로 번갈아 가면 독립적으로 진행. 동시에 발생하는 것 처럼 보이지만 실제로는 순차적
- parallelism : 다중프로세서 시스템에서 가능. 동시에 독립적인 연산
- thread-safe : 특정 코드가 여러 쓰레드들에 의해 호출 가능할 때, 잘못 된 결과 값을 얻지 않는 것, 안정성만을 고려 
- critical section : 중요한 데이터 보호. 동시에 같은 데이터에 접근하지 않는 쓰레드들 간에 parallelism 보장
- execution context : context의 상태를 독립적으로 관리
- scheduling : context switching 이 일어나는 시점 결정
- synchronization : concurrency 한 context들이 공유자원을 균등하게 사용할 수 있는 방법을 제공

##Thread Vs Process
- 쓰레드 간 코드, 데이터, 스택 등 주소공간 공유
- 프로세스간 switch 에 비해 가벼움
- 프로세스는 서로 독립된 가상 메모리 주소 공간을 가지지만 한 프로세스 내에서 동작하는 쓰레드들은 동일한 공유 메모리 주소 공간과 모든 프로세스 데이터를 공유

##Reference
- POSIX Thread를 이용한 프로그래밍 / 인포북