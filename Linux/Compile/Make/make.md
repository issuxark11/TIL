# Make

## Make Utility
- GNU make utility to maintain groups of programs
- The purpose of the make utility is to determine automatically which pieces of a large program need to be recompiled, and issue the commands to recompile them.
- 입력 파일이 바뀌면 자동적으로 결과 파일이 바뀜. 관계있는 부분만 새롭게 갱신

## Makefile
- target, dependency, command 세개로 이루어진 rule 들이 나열
```shell
target ... : dependency ...
		command
```
- target은  object file이나 실행파일로 command의 결과 파일을 지정
- command 는 dependency 부분에 정의된 파일의 내용이 바뀌었거나, target에 해당하는 파일이 없을 때 정의된 것들이 차례로 실행
- command 부분은 반드시 TAB으로 시작

## Reference
- [ GNU Make 강좌](https://wiki.kldp.org/KoreanDoc/html/GNU-Make/GNU-Make.html)