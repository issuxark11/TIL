# BASH(Bourne Again Shell)

## Bash Shell 로그인 과정
```shell
1. 사용자가 ID/PW 입력
2. /bin/login 프로세스가 사용자 인증 관련 파일(/etc/passwd, /etc/shadow 등)을 참조하여 사용자 기본정보 확인
3. /bin/login 프로세스가 BASH Shell 호출
4. /etc/profile을 적용
5. 사용자 개인 환경설정 적용
~/.bash_profile > ~/.bash_login > ~/.profile 순서로 하나만 적용
6. ~/.bashrc 적용
7. ~/.bashrc 에서 /etc/bashrc 적용
8. 사용자에게 쉘 프롬프트 제공
```
### /etc/profile
- 시스템 전역 초기화 파일
- 시스템 전체 환경, 부팅시 시작프로그램 설정, 로그인 셋업 등
- /etc/profile 실행시 /etc/profile.d 디렉토리에 있는 초기화 파일 불러옴
- 쉘을 쓰는 사용자가 로그인 하는 경우 로그인시 한번 읽혀짐
- 로그인 시 ~/.bash_profile 실행 

### /etc/profile.d
- /etc/profile.d/*.sh 
- 폴더 내 .sh 로 된 파일을 알파벳 순으로 실행

### ~/.bash_profile
- 로그인시 호출
- ~/.bashrc 실행

### ~/.bashrc 
- 사용자가 정의한 변수, aliases, functions 등 사용 용이성을 위해 필요한 항목 설정
- .bashrc 파일은 쉘이 실행될 때마다 실행됨
- /etc/bashrc 폴더내 파일들 실행

## Bash Shell Script
```shell
Example
#!/bin/bash
cd /home/SVN/trunk/src
su root -c "sh ./ld-path-setting.sh"  // root 권한으로 실행
LD_LIBRARY_PATH="$(pwd)/libs"
echo "LD_LIBRARY_PATH:"$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH
```
