# C - Memory Structure

## Stack, Heap, Data 영역
- OS가 프로그램 실행시 메모리 공간을 할당
- 스택과 데이터 영역에 할당될 메모리의 크기는 컴파일 타임에 결정되어야 함

### Data Segment
- 전역 변수와 static 변수가 할당
- 일반적으로 프로그램의 시작과 동시에 할당, 프로그램 종료시 메모리에서 소멸
- 데이터 영역에 할당된 변수는 프로그램이 종료될 때 까지 존재

### Stack Segment
- 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장되는 영역
- 스택 영역에 할당된 변수는 함수 소멸시 메모리에서 소멸 
- 먼저 호출된 함수의 스택 공간일수록 늦게 해제

### Heap Segment
- 프로그래머가 관리하는 메모리 영역 
- 프로그래머의 필요에 의해 메모리 공간이 할당 및 소멸되는 영역
- 런타임에 필요한 만큼 메모리를 할당하고 해제

## Reference
* 열혈 C 프로그래밍 / 윤성우 저
* [geeksforgeeks](http://www.geeksforgeeks.org/memory-layout-of-c-program/)