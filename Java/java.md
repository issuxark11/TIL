# Java - Introduction

## 객체지향 프로그래밍 방법

### 클래스(Class)
- ADT (Abstract Data Type) : 사용자 정의 data type    
- reference data type : 기존 data type(primitive data type)을 이용 새로운 data type 생성
- 객체 모델링의 수단
- 객체를 만들기 위한 기본 단위

### 객체지향 언어
```shell
현실세계를 그대로 프로그램으로 묘사/작성
현실세계를 프로그램적으로 modeling
현실세계를 구성하고 있는 객체(Object) 들을 파악
프로그램을 구성하고 있는 객체들을 파악하고 그 객체들간의 data 흐름에 맞춰서 프로그램 작성
   - 은행업무
      ○ 사람
      ○ 은행
      ○ 계좌
      ○ ATM
-> 필요한 객체들을 뽑아냄 (사람마다 다르므로 프로그램을 설계하는데 어려움)
장점 : 현실세계를 그대로 모델링 했으므로 유지보수가 쉬움
```

### 절차지향적 언어 
``` shell
내가 해결해야 하는 문제를 모듈(실행단위)로 작성(-> 기능으로 세분화 / 더 이상 세분화 할 수 없는 기능이 나올 때까지 세분화 시키고 마지막 기능을 코드화)
상위모듈에서 하위모듈로
   - 은행업무
      ○ 예금업무
         § 무통장입금
         § 이체업무
      ○ 외환업무
         § 환전업무
      ○ 대출업무
      ○ …..

장점 : 문제 분석이 쉬움(어떤 사람이 해도 똑같이 나옴)  = 개발기간/비용 단축 
단점 : 유지보수가 어려움(모듈화의 단점 : 하나의 코드 수정하면 다른 기능에도 영향)
```

### Java 
```shell
write it once, run it anywhere(플랫폼 독립성)
.java -> source code
-> compile
-> byte code
-> JVM

JVM -> byte code를 해석(interpret) 해서 실행시켜주는 역할
JRE(java runtime environment) = JVM + API(java class library)
JDK(java development kit) = JRE + utility(compiler, ….)
```