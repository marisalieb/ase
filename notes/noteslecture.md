bash-4.4$ who
s5723321 seat0        2024-09-30 09:49 (login screen)
s5723321 :1           2024-09-30 09:49 (:1)
bash-4.4$ pwd
/home/s5723321
bash-4.4$ dev
bash: dev: command not found
bash-4.4$ ls
Desktop  Documents  Downloads  Music  Pictures	Public	Templates  Videos
bash-4.4$ cd D
bash: cd: D: No such file or directory
bash-4.4$ cd Desktop
bash-4.4$ ls
bash-4.4$ ..
bash: ..: command not found
bash-4.4$ cd ..
bash-4.4$ ls
Desktop  Documents  Downloads  Music  Pictures	Public	Templates  Videos
bash-4.4$ hostname
w12002
bash-4.4$ ls -al
total 124
drwx------.  14 s5723321 ncca  4096 Sep 30 09:49 .
drwxr-xr-x. 771 root     root 65536 Sep 28 09:16 ..
drwxr-xr-x.  12 s5723321 ncca  4096 Sep 30 09:50 .cache
drwx------.  11 s5723321 ncca  4096 Sep 30 09:50 .config
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Desktop
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Documents
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Downloads
-rw-------.   1 s5723321 ncca    16 Sep 30 09:49 .esd_auth
-rw-------.   1 s5723321 ncca   310 Sep 30 09:49 .ICEauthority
drwx------.   3 s5723321 ncca  4096 Sep 30 09:49 .local
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Music
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Pictures
drwxr-----.   3 s5723321 ncca  4096 Sep 30 09:49 .pki
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Public
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Templates
drwxr-xr-x.   2 s5723321 ncca  4096 Sep 30 09:49 Videos
bash-4.4$ cd Desktop
bash-4.4$ clion
bash-4.4$ ls
bash-4.4$ cd ..
bash-4.4$ ls
Desktop  Documents  Downloads  Music  Pictures	Public	Templates  Videos
bash-4.4$ cd Desktop
bash-4.4$ mkdir ASE
bash-4.4$ cd ASE
bash-4.4$ pwd
/home/s5723321/Desktop/ASE
bash-4.4$ touch hello.cpp
bash-4.4$ ls
hello.cpp
bash-4.4$ code 
bash-4.4$ code hello.cpp
bash-4.4$ g++ hello.cpp
/opt/rh/gcc-toolset-13/root/usr/libexec/gcc/x86_64-redhat-linux/13/ld: /lib/../lib64/crt1.o: in function `_start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
bash-4.4$ ./pwd
bash: ./pwd: No such file or directory
bash-4.4$ cd
bash-4.4$ pwd
/home/s5723321
bash-4.4$ ls
Desktop  Documents  Downloads  Music  Pictures	Public	Templates  Videos
bash-4.4$ Desktop
bash: Desktop: command not found
bash-4.4$ cd Desktop
bash-4.4$ ls
ASE
bash-4.4$ cd ASE
bash-4.4$ ls
hello.cpp
bash-4.4$ code hello.cpp
bash-4.4$ ls
hello.cpp
bash-4.4$ g++ hello.cpp
/opt/rh/gcc-toolset-13/root/usr/libexec/gcc/x86_64-redhat-linux/13/ld: /lib/../lib64/crt1.o: in function `_start':
(.text+0x24): undefined reference to `main'
collect2: error: ld returned 1 exit status
bash-4.4$ code hello.cpp
bash-4.4$ ls
hello.cpp
bash-4.4$ g++ hello.cpp
hello.cpp:6:1: error: expected unqualified-id before ‘{’ token
    6 | {
      | ^
bash-4.4$ ./a.out
bash: ./a.out: No such file or directory
bash-4.4$ g++ hello.cpp
bash-4.4$ ./a.out
hello world 
bash-4.4$ ls
a.out  hello.cpp
bash-4.4$ ls -al
total 44
drwxr-xr-x. 2 s5723321 ncca  4096 Sep 30 11:17 .
drwxr-xr-x. 3 s5723321 ncca  4096 Sep 30 11:06 ..
-rwxr-xr-x. 1 s5723321 ncca 26320 Sep 30 11:17 a.out
-rw-r--r--. 1 s5723321 ncca   101 Sep 30 11:16 hello.cpp
bash-4.4$ g++ -c -Wall -g hello.cpp
bash-4.4$ ls -al
total 76
drwxr-xr-x. 2 s5723321 ncca  4096 Sep 30 11:32 .
drwxr-xr-x. 3 s5723321 ncca  4096 Sep 30 11:06 ..
-rwxr-xr-x. 1 s5723321 ncca 26320 Sep 30 11:17 a.out
-rw-r--r--. 1 s5723321 ncca   101 Sep 30 11:16 hello.cpp
-rw-r--r--. 1 s5723321 ncca 26328 Sep 30 11:32 hello.o
bash-4.4$ ^C
bash-4.4$ c^C
bash-4.4$ ls
a.out  hello.cpp  hello.o
bash-4.4$ cd ¬
bash: cd: ¬: No such file or directory
bash-4.4$ cd ~
bash-4.4$ ls
Desktop  Documents  Downloads  Music  Pictures	Public	Templates  Videos
bash-4.4$ mkdir MyRepos
bash-4.4$ cd MyRepos/
bash-4.4$ ls
bash-4.4$ git clone https://github.com/marisalieb/ase.git
Cloning into 'ase'...
Gtk-Message: 13:28:16.097: Failed to load module "canberra-gtk-module"
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': ^C
bash-4.4$ ^C
bash-4.4$ git clone https://github.com/marisalieb/ase.git
Cloning into 'ase'...
warning: You appear to have cloned an empty repository.
bash-4.4$ ls
ase
bash-4.4$ cd ase/
bash-4.4$ ls
bash-4.4$ ll
bash: ll: command not found
bash-4.4$ ls -la
total 12
drwxr-xr-x. 3 s5723321 ncca 4096 Sep 30 13:29 .
drwxr-xr-x. 3 s5723321 ncca 4096 Sep 30 13:29 ..
drwxr-xr-x. 7 s5723321 ncca 4096 Sep 30 13:29 .git
bash-4.4$ ls
bash-4.4$ ls -l
total 0
bash-4.4$ ls -a
.  ..  .git
bash-4.4$ ls -la
total 12
drwxr-xr-x. 3 s5723321 ncca 4096 Sep 30 13:29 .
drwxr-xr-x. 3 s5723321 ncca 4096 Sep 30 13:29 ..
drwxr-xr-x. 7 s5723321 ncca 4096 Sep 30 13:29 .git
bash-4.4$ ls
bash-4.4$ touch foo
bash-4.4$ ls
foo
bash-4.4$ mv foo REAMDE.md
bash-4.4$ ls
REAMDE.md
bash-4.4$ git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	REAMDE.md

nothing added to commit but untracked files present (use "git add" to track)
bash-4.4$ ls
REAMDE.md
bash-4.4$ git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	REAMDE.md

nothing added to commit but untracked files present (use "git add" to track)
bash-4.4$ git add REAMDE.md 
bash-4.4$ git status
On branch main

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
	new file:   REAMDE.md

bash-4.4$ git commit -m "add readme"
[main (root-commit) f9854dd] add readme
 Committer: Liebner Marisa <s5723321@w12002.student.bournemouth.ac.uk>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 REAMDE.md
bash-4.4$ git status
On branch main
Your branch is based on 'origin/main', but the upstream is gone.
  (use "git branch --unset-upstream" to fixup)

nothing to commit, working tree clean
bash-4.4$ git log
commit f9854ddb9a42e65dec90b03748e84a04fb5ef4ea (HEAD -> main)
Author: Liebner Marisa <s5723321@w12002.student.bournemouth.ac.uk>
Date:   Mon Sep 30 13:38:52 2024 +0100

    add readme
bash-4.4$ touch noteslecture.md
bash-4.4$ ls
noteslecture.md  REAMDE.md
bash-4.4$ git status
On branch main
Your branch is based on 'origin/main', but the upstream is gone.
  (use "git branch --unset-upstream" to fixup)

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	noteslecture.md

nothing added to commit but untracked files present (use "git add" to track)
bash-4.4$ git add noteslecture.md
bash-4.4$ git status
On branch main
Your branch is based on 'origin/main', but the upstream is gone.
  (use "git branch --unset-upstream" to fixup)

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   noteslecture.md

bash-4.4$ ls
noteslecture.md  REAMDE.md
bash-4.4$ 












bash-4.4$ ls
Desktop  Documents  Downloads  Music  MyRepos  Pictures  Public  Templates  Videos
bash-4.4$ cd MyRepos/ase/
bash-4.4$ ls
noteslecture.md  REAMDE.md
bash-4.4$ git status
On branch main
Your branch is based on 'origin/main', but the upstream is gone.
  (use "git branch --unset-upstream" to fixup)

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   noteslecture.md

bash-4.4$ git commit -m "add notes"
[main 42e9d6f] add notes
 Committer: Liebner Marisa <s5723321@w12002.student.bournemouth.ac.uk>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 noteslecture.md
bash-4.4$ git status
On branch main
Your branch is based on 'origin/main', but the upstream is gone.
  (use "git branch --unset-upstream" to fixup)

nothing to commit, working tree clean
bash-4.4$ git log
commit 42e9d6f84629f5253b29ae1407412989758dd56a (HEAD -> main)
Author: Liebner Marisa <s5723321@w12002.student.bournemouth.ac.uk>
Date:   Mon Sep 30 13:46:11 2024 +0100

    add notes

commit f9854ddb9a42e65dec90b03748e84a04fb5ef4ea
Author: Liebner Marisa <s5723321@w12002.student.bournemouth.ac.uk>
Date:   Mon Sep 30 13:38:52 2024 +0100

    add readme
bash-4.4$ git remote 
.git/            noteslecture.md  REAMDE.md        
bash-4.4$ git remote list
error: unknown subcommand: `list'
usage: git remote [-v | --verbose]
   or: git remote add [-t <branch>] [-m <master>] [-f] [--tags | --no-tags] [--mirror=<fetch|push>] <name> <url>
   or: git remote rename [--[no-]progress] <old> <new>
   or: git remote remove <name>
   or: git remote set-head <name> (-a | --auto | -d | --delete | <branch>)
   or: git remote [-v | --verbose] show [-n] <name>
   or: git remote prune [-n | --dry-run] <name>
   or: git remote [-v | --verbose] update [-p | --prune] [(<group> | <remote>)...]
   or: git remote set-branches [--add] <name> <branch>...
   or: git remote get-url [--push] [--all] <name>
   or: git remote set-url [--push] <name> <newurl> [<oldurl>]
   or: git remote set-url --add <name> <newurl>
   or: git remote set-url --delete <name> <url>

    -v, --[no-]verbose    be verbose; must be placed before a subcommand

bash-4.4$ git remote get-url origin
https://github.com/marisalieb/ase.git
bash-4.4$ 
bash-4.4$ git remote get-url origin
https://github.com/marisalieb/ase.git
bash-4.4$ 





















bash-4.4$ git remote get-url origin
https://github.com/marisalieb/ase.git
bash-4.4$ git branch
* main
bash-4.4$ git push origin main
Gtk-Message: 13:50:42.523: Failed to load module "canberra-gtk-module"
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': marisalieb
Gtk-Message: 13:58:40.748: Failed to load module "canberra-gtk-module"
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 24 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (5/5), 419 bytes | 59.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), done.
To https://github.com/marisalieb/ase.git
 * [new branch]      main -> main
bash-4.4$ code noteslecture.md 
bash-4.4$ 

