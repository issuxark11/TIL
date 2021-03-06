## git guide

### git install
- sudo apt-get install git

### git configuration
- ~/.gitconfig

"`
# git config --global user.name "id"
# git config --global user.email "email@gmail.com"
# git config --global color.ui "auto"
# git config --list
"`

### 버전 관리 시작 (저장소 생성) 
- start version control. initialize repository. create '.git' 
- # git init

### 버전 저장소 복제
- clone remote repository
- # git clone "사용자명@호스트://원격/저장소/경로"
- # git clone "https://github.com/issuxark11/TIL"

### work flow
- Working directory(작업 디렉토리) - 실행파일들로 구성
- Index - Staging area (커밋 전 임시 영역)
- HEAD - commit (최종 확정본)

### 버전 관리 대상 지정 
- add modified files to Index - 스테이지 영역에 파일 추가
- # git add (file name)

### Commit
- commit modified files to HEAD - 실제 repository 변경 내역에 반영
- 버전관리 되고 있는 파일 중 변경된 파일이 있다면 변경된 내용들을 저장소에 저장
- 이력을 남겨 어떤 작업을 했는지 기록
- # git commit -m "commit message"

### Checkout
- 아직 스테이지 영역에 올라가지 않았거나 커밋되지 않은 파일의 변경내용을 취소하고 이전 커밋상태로 되돌림
- # git checkout (file name)

### 원격 저장소에 반영 
- upload HEAD to remote repository
- # git push origin master

### fetch
- # git fetch
- 원격저장소의 변경사항을 가져와서 원격브랜치를 갱신

### pull
- # git pull
- fetch + merge
- 원격저장소의 변경사항을 가져와서 지역브랜치에 합침

### 버전 관리 상태 체크
- check version control state
- # git status

### 작업 이력 
- repository에 commit 된 log 확인
- # git log
- # git log -p (file name) : commit에서 변경된 내용 함께 확인

### git rebase
- 가리고 싶은 commit을 'fixup'으로 고치고 저장
- 이미 push 한 commit 은 건들지 않는다. 주의해서 사용 (branch 생김...)
- # git rebase -i HEAD~2

### git stash
- 스테이지 영역에 아직 commit 하지 않은 변경사항이 있는 경우 git rebase나 git pull 수행시 실패 
- 아직 commit 하지 않은 변경사항을 백업하고 워킹디렉토리를 HEAD 상태로 돌림
"`

# git stash
# git stash save
# git stash list // stash 로 저장한 내역 조회
# git stash pop // stash에 저장한 내용을 다시 적용
# git stash clear // 전체 stash list 삭제
"`

## Commit message Example
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

## Reference
* [git-documentation](https://git-scm.com/docs)
