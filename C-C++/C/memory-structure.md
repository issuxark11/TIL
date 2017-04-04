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

## Memory Layout of C Programs
- [memory layout of a running process](http://dyewrv1redcbt.cloudfront.net//wp-content/uploads/Memory-Layout.gif)

### 1. Text Segment(Code Segment)
```shell
A text segment , also known as a code segment is one of the sections of a program in an object file or in memory, which contains executable instructions.

As a memory region, a text segment may be placed below the heap or stack in order to prevent heaps and stack overflows from overwriting it.

Usually, the text segment is sharable so that only a single copy needs to be in memory for frequently executed programs, such as text editors, the C compiler, the shells, and so on. Also, the text segment is often read-only, to prevent a program from accidentally modifying its instructions.
```

### 2. Initialized Data Segment
```shell
Initialized data segment, usually called simply the Data Segment. 

A data segment is a portion of virtual address space of a program, which contains the global variables and static variables that are initialized by the programmer.

Note that, data segment is not read-only, since the values of the variables can be altered at run time.

This segment can be further classified into initialized read-only area and initialized read-write area.

For instance the global string defined by char s[] = “hello world” in C and a C statement like int debug=1 outside the main (i.e. global) would be stored in initialized read-write area. 
And a global C statement like const char* string = “hello world” makes the string literal “hello world” to be stored in initialized read-only area and the character pointer variable string in initialized read-write area.
```

### 3. Uninitialized Data Segment
```shell
Uninitialized data segment, often called the “bss” segment, named after an ancient assembler operator that stood for “block started by symbol.” Data in this segment is initialized by the kernel to arithmetic 0 before the program starts executing

uninitialized data starts at the end of the data segment and contains all global variables and static variables that are initialized to zero or do not have explicit initialization in source code.

For instance a variable declared static int i; would be contained in the BSS segment.
For instance a global variable declared int j; would be contained in the BSS segment.
```

### 4. Stack
```shell
The stack area traditionally adjoined the heap area and grew the opposite direction; when the stack pointer met the heap pointer, free memory was exhausted. (With modern large address spaces and virtual memory techniques they may be placed almost anywhere, but they still typically grow opposite directions.)

The stack area contains the program stack, a LIFO structure, typically located in the higher parts of memory. On the standard PC x86 computer architecture it grows toward address zero; on some other architectures it grows the opposite direction. A “stack pointer” register tracks the top of the stack; it is adjusted each time a value is “pushed” onto the stack. The set of values pushed for one function call is termed a “stack frame”; A stack frame consists at minimum of a return address.

Stack, where automatic variables are stored, along with information that is saved each time a function is called. Each time a function is called, the address of where to return to and certain information about the caller’s environment, such as some of the machine registers, are saved on the stack. The newly called function then allocates room on the stack for its automatic and temporary variables. This is how recursive functions in C can work. Each time a recursive function calls itself, a new stack frame is used, so one set of variables doesn’t interfere with the variables from another instance of the function.
```

### 5. Heap
```shell
Heap is the segment where dynamic memory allocation usually takes place.

The heap area begins at the end of the BSS segment and grows to larger addresses from there.The Heap area is managed by malloc, realloc, and free, which may use the brk and sbrk system calls to adjust its size (note that the use of brk/sbrk and a single “heap area” is not required to fulfill the contract of malloc/realloc/free; they may also be implemented using mmap to reserve potentially non-contiguous regions of virtual memory into the process’ virtual address space). The Heap area is shared by all shared libraries and dynamically loaded modules in a process.
```

## Reference
* 열혈 C 프로그래밍 / 윤성우 저
* [geeksforgeeks](http://www.geeksforgeeks.org/memory-layout-of-c-program/)