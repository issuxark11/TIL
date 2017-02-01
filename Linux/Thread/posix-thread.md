#POSIX Thread
##Reference
- POSIX Thread를 이용한 프로그래밍 / 인포북

##Introduction
- asynchronous : 두 개의 작업이 서로 독립적으로 발생/진행될 수 있을 때
- mutex : POSIX 쓰레드의 기본적인 동기화를 위한 객체
- concurrency : 작업들이 무작위 순서로 번갈아 가면 독립적으로 진행. 동시에 발생하는 것 처럼 보이지만 순차적
- parallelism : 다중프로세서 시스템에서 가능. 동시에 독립적인 연산
- thread-safe
- critical section : 중요한 데이터 보호
- execution context : context의 상태를 독립적으로 관리
- scheduling : context switching 이 일어나는 시점 결정
- synchronization : concurrency 한 context들이 공유자원을 균등하게 사용할 수 있는 방법을 제공

##Thread
- 쓰레드 간 코드, 데이터, 스택 등 주소공간 공유
- 프로세스간 switch 에 비해 가벼움

