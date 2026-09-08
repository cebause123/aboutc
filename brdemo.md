==cebau@cebause MINGW64 ~/Desktop/brdemo==
$ git clone git@github.com:cebause123/aboutc.git
(推送，克隆啥的要断掉加速器)
Cloning into 'aboutc'...
remote: Enumerating objects: 27, done.
remote: Counting objects: 100% (27/27), done.
remote: Compressing objects: 100% (15/15), done.
remote: Total 27 (delta 3), reused 27 (delta 3), pack-reused 0 (from 0)
Receiving objects: 100% (27/27), done.
Resolving deltas: 100% (3/3), done.

==cebau@cebause MINGW64 ~/Desktop/brdemo==
$ git-log
fatal: not a git repository (or any of the parent directories): .git

==cebau@cebause MINGW64 ~/Desktop/brdemo==
$ git pull
fatal: not a git repository (or any of the parent directories): .git

==cebau@cebause MINGW64 ~/Desktop/brdemo==
$ cd aboutc/**(克隆完了，看状态什么的要进文件啊)**

==cebau@cebause MINGW64 ~/Desktop/brdemo/aboutc== (master)
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
| * 7678af5 add dev
* | f3cbb0c add filema
|/
* 7f5188d update file1
* 6028c23 add file1

==cebau@cebause MINGW64 ~/Desktop/brdemo/aboutc== (master)
$ git pull（拉取）
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Compressing objects: 100% (1/1), done.
remote: Total 2 (delta 1), reused 2 (delta 1), pack-reused 0 (from 0)
Unpacking objects: 100% (2/2), 205 bytes | 51.00 KiB/s, done.
From github.com:cebause123/aboutc
   7833976..0cd1d51  master     -> origin/master
Updating 7833976..0cd1d51
Fast-forward
 some.txt | 0
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 some.txt

==cebau@cebause MINGW64 ~/Desktop/brdemo/aboutc== (master)
$ git-log
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
| * 7678af5 add dev
* | f3cbb0c add filema
|/
* 7f5188d update file1
* 6028c23 add file1
