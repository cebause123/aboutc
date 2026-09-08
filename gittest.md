==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git push --set-upstream origin master:master
Everything up-to-date
branch 'master' set up to track 'origin/master'.

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git branch -vv
  dev1   7678af5 add dev
* master 7833976 [origin/master] commit from vscode

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git-log
* 7833976 (HEAD -> master, origin/master, origin/HEAD) commit from vscode
* dee3328 ok
*   46374ed Merge branch 'dev'
|\
| * d723169 update file01 count
* | 661973d update file1 count3
|/
*   d9f3d86 Merge branch 'dev1'
|\
| * 7678af5 (dev1) add dev
* | f3cbb0c add filema
|/
* 7f5188d update file1
* 6028c23 add file1

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ touch some.txt

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git add .
error: 'aboutc/' does not have a commit checked out
error: unable to index file 'aboutc/'
fatal: adding files failed

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ rm -rf aboutc/.git（别嵌套带.git的文件）

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git add .

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git commit -m 'add some'
[master 0cd1d51] add some
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 some.txt

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git-log
* 0cd1d51 (HEAD -> master) add some
* 7833976 (origin/master, origin/HEAD) commit from vscode
* dee3328 ok
*   46374ed Merge branch 'dev'
|\
| * d723169 update file01 count
* | 661973d update file1 count3
|/
*   d9f3d86 Merge branch 'dev1'
|\
| * 7678af5 (dev1) add dev
* | f3cbb0c add filema
|/
* 7f5188d update file1
* 6028c23 add file1

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git push
Enumerating objects: 3, done.
Counting objects: 100% (3/3), done.
Delta compression using up to 24 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (2/2), 225 bytes | 225.00 KiB/s, done.
Total 2 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:cebause123/aboutc.git
   7833976..0cd1d51  master -> master

==cebau@cebause MINGW64 ~/Desktop/git-test (master)==
$ git-log(同步了远程)
* 0cd1d51 (HEAD -> master, origin/master, origin/HEAD) add some
* 7833976 commit from vscode
* dee3328 ok
*   46374ed Merge branch 'dev'
|\
| * d723169 update file01 count
* | 661973d update file1 count3
|/
*   d9f3d86 Merge branch 'dev1'
|\
| * 7678af5 (dev1) add dev
* | f3cbb0c add filema
|/
* 7f5188d update file1
* 6028c23 add file1
