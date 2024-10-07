[s5723321@w12002 ~]$g++ -v
Using built-in specs.
COLLECT_GCC=g++
COLLECT_LTO_WRAPPER=/opt/rh/gcc-toolset-13/root/usr/libexec/gcc/x86_64-redhat-linux/13/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-redhat-linux
Configured with: ../configure --enable-bootstrap --enable-languages=c,c++,fortran,lto --prefix=/opt/rh/gcc-toolset-13/root/usr --mandir=/opt/rh/gcc-toolset-13/root/usr/share/man --infodir=/opt/rh/gcc-toolset-13/root/usr/share/info --with-bugurl=http://bugzilla.redhat.com/bugzilla --enable-shared --enable-threads=posix --enable-checking=release --enable-multilib --with-system-zlib --enable-__cxa_atexit --disable-libunwind-exceptions --enable-gnu-unique-object --enable-linker-build-id --with-gcc-major-version-only --enable-libstdcxx-backtrace --with-libstdcxx-zoneinfo=/usr/share/zoneinfo --with-linker-hash-style=gnu --enable-plugin --enable-initfini-array --with-isl=/builddir/build/BUILD/gcc-13.2.1-20231205/obj-x86_64-redhat-linux/isl-install --enable-offload-targets=nvptx-none --without-cuda-driver --enable-offload-defaulted --enable-gnu-indirect-function --enable-cet --with-tune=generic --with-arch_32=x86-64 --build=x86_64-redhat-linux
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 13.2.1 20231205 (Red Hat 13.2.1-6) (GCC) 
[s5723321@w12002 ~]$pwd
/home/s5723321
[s5723321@w12002 ~]$ls
01.H20.5_What_is_Houdini  Documents    houdini20.5  MyRepos   Templates
Adlm                      Downloads    maya         Pictures  Videos
Desktop                   houdini20.0  Music        Public    xgen
[s5723321@w12002 ~]$cd Desktop/
[s5723321@w12002 Desktop]$ls
 ASE   CGITech  'CGI Tools'  'old Houdini'
[s5723321@w12002 Desktop]$cd ASE
[s5723321@w12002 ASE]$ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o  Week1
[s5723321@w12002 ASE]$mkdir week2
[s5723321@w12002 ASE]$ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o  Week1  week2
[s5723321@w12002 ASE]$cd week2
[s5723321@w12002 week2]$ls
[s5723321@w12002 week2]$git clone https://github.com/NCCA/ASELectureCode
Cloning into 'ASELectureCode'...
remote: Enumerating objects: 490, done.
remote: Counting objects: 100% (282/282), done.
remote: Compressing objects: 100% (197/197), done.
remote: Total 490 (delta 71), reused 247 (delta 54), pack-reused 208 (from 1)
Receiving objects: 100% (490/490), 174.91 KiB | 522.00 KiB/s, done.
Resolving deltas: 100% (145/145), done.
Updating files: 100% (176/176), done.
[s5723321@w12002 week2]$ls
ASELectureCode
[s5723321@w12002 week2]$cd ASELectureCode/
[s5723321@w12002 ASELectureCode]$ls
Lecture1  Lecture2  Lecture3  Lecture4  Lecture5Classes  Lecture7STL  README.md
[s5723321@w12002 ASELectureCode]$cd Lecture2
[s5723321@w12002 Lecture2]$ls
alias.cpp           enum3.cpp        namespace2.cpp  struct2.cpp
array2.cpp          enum.cpp         namespace3.cpp  struct3.cpp
array3.cpp          EnumParam.cpp    namespace4.cpp  typedef.cpp
array.cpp           floatArray.cpp   pack.cpp        union1.cpp
BoolFromString.cpp  ifconstexpr.cpp  path.cpp        using.cpp
dirit.cpp           ifinit.cpp       sizeof.c
enum1.cpp           literal.cpp      stdarray.cpp
enum2.cpp           namespace1.cpp   struct1.cpp
[s5723321@w12002 Lecture2]$code .
[s5723321@w12002 Lecture2]$cd
[s5723321@w12002 ~]$pwd
/home/s5723321
[s5723321@w12002 ~]$ls
01.H20.5_What_is_Houdini  Documents    houdini20.5  MyRepos   Templates
Adlm                      Downloads    maya         Pictures  Videos
Desktop                   houdini20.0  Music        Public    xgen
[s5723321@w12002 ~]$cd Desktop/
[s5723321@w12002 Desktop]$ls
 ASE   CGITech  'CGI Tools'  'old Houdini'
[s5723321@w12002 Desktop]$cd ASE
[s5723321@w12002 ASE]$ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o  Week1  week2
[s5723321@w12002 ASE]$code nicerhelloworld.
[s5723321@w12002 ASE]$code nicerhelloworld.
nicerhelloworld.cpp  nicerhelloworld.o    
[s5723321@w12002 ASE]$code nicerhelloworld.cpp 
