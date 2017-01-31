## git guide
```shell
git install
# sudo apt-get install git

git configuration
~/.gitconfig
# git config --global user.name "id"
# git config --global user.email "email@gmail.com"
# git config --global color.ui "auto"
# git config --list

git init
# start version control. initialize repository. create '.git' 

git clone "사용자명@호스트://원격/저장소/경로"
# clone remote repository
# git clone "https://github.com/issuxark11/TIL"

work flow
# Working directory(작업 디렉토리) - 실행파일들로 구성
# Index - Staging area (커밋 전 임시 영역)
# HEAD - commit (최종 확정본)

git add <file name>
# add modified files to Index - 스테이지 영역에 파일 추가

git commit -m "commit message"
# commit modified files to HEAD - 실제 repository 변경 내역에 반영

git push origin master
# upload HEAD to remote repository - 원격 저장소에 반영

git status
# check version control state

git log
# repository에 commit 된 log 확인

git log -p <file name>
# commit에서 변경된 내용 함께 확인

git rebase -i HEAD~2
# 가리고 싶은 commit을 'fixup'으로 고치고 저장
# 이미 push 한 commit 은 건들지 않는다. 주의해서 사용 (branch 생김...)

```

## Commit message
```shell
커밋 내용 한 줄 요약
공백 한줄 
[Module] 모듈명
[Cause] 수정 원인
[Solution] 해결책 (적용한 내용)
[Target Platform] OS 및 컴파일러 버젼
[Verified] 검증을 어떻게 했는지
[Build] 빌드 여부
```
