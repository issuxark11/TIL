# /etc/rc.local
부팅시 자동으로 실행 스크립트 작성

## 리눅스 부팅과정
실행레벨에 따라 설정되어 있는 프로세스들을 실행
/etc/inittab 파일에는 init이 현재의 실행레벨에서 실행되어야 할 내용들에 대한 설정 포함
runlevel에 따라 등록된 내역은 /etc/rc0.d/, /etc/rc1.d/, /etc/rc2.d ....

##startup.sh Example
'''shell
#!/bin/bash
cd /home/SVN/trunk/src
su root -c "sh./ld-path-setting,sh" 루트 권한으로 실행


##