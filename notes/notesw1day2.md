[s5723321@w12002 ~]$ pwd
/home/s5723321
[s5723321@w12002 ~]$ ls
Adlm     Documents  maya   MyRepos   Public     Videos
Desktop  Downloads  Music  Pictures  Templates  xgen
[s5723321@w12002 ~]$ cd D
Desktop/   Documents/ Downloads/ 
[s5723321@w12002 ~]$ cd Desktop/
[s5723321@w12002 Desktop]$ ls
ASE
[s5723321@w12002 Desktop]$ cd ASE/
[s5723321@w12002 ASE]$ ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o
[s5723321@w12002 ASE]$ mkdir Week1
[s5723321@w12002 ASE]$ ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o  Week1
[s5723321@w12002 ASE]$ cd WE
-bash: cd: WE: No such file or directory
[s5723321@w12002 ASE]$ cd Week1/
[s5723321@w12002 Week1]$ touch 1 2 3 4 5 6
[s5723321@w12002 Week1]$ ls
1  2  3  4  5  6
[s5723321@w12002 Week1]$ ll
total 0
-rw-r--r--. 1 s5723321 ncca 0 Oct  1 14:24 1
-rw-r--r--. 1 s5723321 ncca 0 Oct  1 14:24 2
-rw-r--r--. 1 s5723321 ncca 0 Oct  1 14:24 3
-rw-r--r--. 1 s5723321 ncca 0 Oct  1 14:24 4
-rw-r--r--. 1 s5723321 ncca 0 Oct  1 14:24 5
-rw-r--r--. 1 s5723321 ncca 0 Oct  1 14:24 6
[s5723321@w12002 Week1]$ l.
.  ..
[s5723321@w12002 Week1]$ ls
1  2  3  4  5  6
[s5723321@w12002 Week1]$ rm 1
[s5723321@w12002 Week1]$ ls
2  3  4  5  6
[s5723321@w12002 Week1]$ rm 5 6 
[s5723321@w12002 Week1]$ ls
2  3  4
[s5723321@w12002 Week1]$ ls -al
total 8
drwxr-xr-x. 2 s5723321 ncca 4096 Oct  1 14:26 .
drwxr-xr-x. 3 s5723321 ncca 4096 Oct  1 14:24 ..
-rw-r--r--. 1 s5723321 ncca    0 Oct  1 14:24 2
-rw-r--r--. 1 s5723321 ncca    0 Oct  1 14:24 3
-rw-r--r--. 1 s5723321 ncca    0 Oct  1 14:24 4
[s5723321@w12002 Week1]$ ls
2  3  4
[s5723321@w12002 Week1]$ cd
[s5723321@w12002 ~]$ pwd
/home/s5723321
[s5723321@w12002 ~]$ touch ~/.bashrc
[s5723321@w12002 ~]$ code /home/s5723321/.bashrc
[s5723321@w12002 ~]$ source  ~/.bashrc
[s5723321@w12002 ~]$ alias
alias egrep='egrep --color=auto'
alias fgrep='fgrep --color=auto'
alias grep='grep --color=auto'
alias l.='ls -d .* --color=auto'
alias ll='ls -l --color=auto'
alias ls='ls --color=auto'
alias rm='rm -i'
alias vi='vim'
alias xzegrep='xzegrep --color=auto'
alias xzfgrep='xzfgrep --color=auto'
alias xzgrep='xzgrep --color=auto'
alias zegrep='zegrep --color=auto'
alias zfgrep='zfgrep --color=auto'
alias zgrep='zgrep --color=auto'
[s5723321@w12002 ~]$ ls
Adlm     Documents  maya   MyRepos   Public     Videos
Desktop  Downloads  Music  Pictures  Templates  xgen
[s5723321@w12002 ~]$ cd Des
-bash: cd: Des: No such file or directory
[s5723321@w12002 ~]$ cd Desktop/
[s5723321@w12002 Desktop]$ ls
ASE
[s5723321@w12002 Desktop]$ cd ASE/
[s5723321@w12002 ASE]$ ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o  Week1
[s5723321@w12002 ASE]$ cd Week1/
[s5723321@w12002 Week1]$ ls
2  3  4
[s5723321@w12002 Week1]$ rm 2
rm: remove regular empty file '2'? f
[s5723321@w12002 Week1]$ ls
2  3  4
[s5723321@w12002 Week1]$ touch 4
[s5723321@w12002 Week1]$ ls
2  3  4
[s5723321@w12002 Week1]$ touch 5
[s5723321@w12002 Week1]$ ls
2  3  4  5
[s5723321@w12002 Week1]$ rm 5
rm: remove regular empty file '5'? e
[s5723321@w12002 Week1]$ ls
2  3  4  5
[s5723321@w12002 Week1]$ rm 5
rm: remove regular empty file '5'? y
[s5723321@w12002 Week1]$ ls
2  3  4
[s5723321@w12002 Week1]$ cd
[s5723321@w12002 ~]$ cd
[s5723321@w12002 ~]$ ls
Adlm     Documents  maya   MyRepos   Public     Videos
Desktop  Downloads  Music  Pictures  Templates  xgen
[s5723321@w12002 ~]$ cd Desktop/
[s5723321@w12002 Desktop]$ ls
ASE
[s5723321@w12002 Desktop]$ ASE
bash: ASE: command not found...
[s5723321@w12002 Desktop]$ cd ASE
[s5723321@w12002 ASE]$ ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o  Week1
[s5723321@w12002 ASE]$ cd Week1/
[s5723321@w12002 Week1]$ ls
Lab1
[s5723321@w12002 Week1]$ cd Lab1/
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ cd
[s5723321@w12002 ~]$ ls
Adlm     Documents  maya   MyRepos   Public     Videos
Desktop  Downloads  Music  Pictures  Templates  xgen
[s5723321@w12002 ~]$ cd MyRepos/
[s5723321@w12002 MyRepos]$ ls
ase
[s5723321@w12002 MyRepos]$ cd ase
[s5723321@w12002 ase]$ ls
notes
[s5723321@w12002 ase]$ cd notes
[s5723321@w12002 notes]$ ls
a.out  nicerhelloworld.cpp  noteslecture.md  README.md  s
[s5723321@w12002 notes]$ touch notesw1day2.md
[s5723321@w12002 notes]$ code notesw1day2.md 
[s5723321@w12002 notes]$ 







[s5723321@w12002 ~]$ cd
[s5723321@w12002 ~]$ ls
Adlm     Documents  maya   MyRepos   Public     Videos
Desktop  Downloads  Music  Pictures  Templates  xgen
[s5723321@w12002 ~]$ pwd
/home/s5723321
[s5723321@w12002 ~]$ touch ~/.bash_profile
[s5723321@w12002 ~]$ code /home/s5723321/.bash_profile
[s5723321@w12002 ~]$ alias
alias egrep='egrep --color=auto'
alias fgrep='fgrep --color=auto'
alias grep='grep --color=auto'
alias l.='ls -d .* --color=auto'
alias ll='ls -l --color=auto'
alias ls='ls --color=auto'
alias vi='vim'
alias xzegrep='xzegrep --color=auto'
alias xzfgrep='xzfgrep --color=auto'
alias xzgrep='xzgrep --color=auto'
alias zegrep='zegrep --color=auto'
alias zfgrep='zfgrep --color=auto'
alias zgrep='zgrep --color=auto'
[s5723321@w12002 ~]$ 













[s5723321@w12002 Lab1]$  cd
[s5723321@w12002 ~]$ ls
Adlm     Documents  maya   MyRepos   Public     Videos
Desktop  Downloads  Music  Pictures  Templates  xgen
[s5723321@w12002 ~]$ cd Desktop/
[s5723321@w12002 Desktop]$ ls
ASE
[s5723321@w12002 Desktop]$ cd ASE
[s5723321@w12002 ASE]$ ls
a.out  hello.cpp  hello.o  nicerhelloworld.cpp  nicerhelloworld.o  Week1
[s5723321@w12002 ASE]$ cd WE
-bash: cd: WE: No such file or directory
[s5723321@w12002 ASE]$ cd Week1/
[s5723321@w12002 Week1]$ ls
Lab1
[s5723321@w12002 Week1]$ cd Lab1/
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ cd build
[s5723321@w12002 build]$ cmake ..
-- The C compiler identification is GNU 13.2.1
-- The CXX compiler identification is GNU 13.2.1
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /opt/rh/gcc-toolset-13/root/usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /opt/rh/gcc-toolset-13/root/usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (2.3s)
-- Generating done (0.1s)
-- Build files have been written to: /home/s5723321/Desktop/ASE/Week1/Lab1/build
[s5723321@w12002 build]$ ls
CMakeCache.txt  CMakeFiles  cmake_install.cmake  Makefile
[s5723321@w12002 build]$ code Makefile 
[s5723321@w12002 build]$ cd ..
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ rm -rf build/
[s5723321@w12002 Lab1]$ ls
a.out  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ code .
[s5723321@w12002 Lab1]$ code .
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ rm -rf build/
[s5723321@w12002 Lab1]$ ls
a.out  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ code .
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ rm -rf build/
[s5723321@w12002 Lab1]$ ls
a.out  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ code .
[s5723321@w12002 Lab1]$ ls
a.out  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ rm -rf build/
[s5723321@w12002 Lab1]$ ls
a.out  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ code .
[s5723321@w12002 Lab1]$ code hello.cpp 
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ cd build/
[s5723321@w12002 build]$ ls
build.ninja     CMakeFiles           compile_commands.json
CMakeCache.txt  cmake_install.cmake  fmt
[s5723321@w12002 build]$ cd ..
[s5723321@w12002 Lab1]$ ls
a.out  build  CMakeLists.txt  hello.cpp
[s5723321@w12002 Lab1]$ cd
[s5723321@w12002 ~]$ ls
Adlm     Documents  maya   MyRepos   Public     Videos
Desktop  Downloads  Music  Pictures  Templates  xgen
[s5723321@w12002 ~]$ cd Public/
[s5723321@w12002 Public]$ ls
[s5723321@w12002 Public]$ cd
[s5723321@w12002 ~]$ cd public/devel/
-bash: cd: public/devel/: No such file or directory
[s5723321@w12002 ~]$ cd /public
[s5723321@w12002 public]$ ls
aquota.group  bapublic  devel   fvt  lost+found  realflow.lic  vmware-root
aquota.user   bin       ftnlhv  it   mapublic    renderd
[s5723321@w12002 public]$ cd devel
[s5723321@w12002 devel]$ ls
2018  23-24  ArgsExplorer  HoudiniTraining  rh-python36
2022  24-25  EULA.txt      noise
[s5723321@w12002 devel]$ cd 24-25
[s5723321@w12002 24-25]$ ls
bin  clion  CLion-2024.2.2.tar.gz  clionold  fossdcc  pycharm  vcpkg
[s5723321@w12002 24-25]$ cd vcpkg/
[s5723321@w12002 vcpkg]$ ls /opt/
3delight-2.9.53  DEFENDER     Katana6.5v3    Nuke14.1v4   rh               yeti
Allegorithmic    google       Mari6.0v3      nvidia       sidefx_packages
autodesk         hfs19.5.805  metashape-pro  pixar        thepixelfarm
Autodesk         hfs20.0.688  microsoft      ptgui        TMP
brave.com        hfs20.5.278  nessus_agent   rawtherapee  TMP_HOUDINI
ChaosGroup       hfs20.5.332  NOMACHINE      resolve      vrlclient.xml
[s5723321@w12002 vcpkg]$ ls
bootstrap-vcpkg.bat  installed      README_ko_KR.md  toolsrc
bootstrap-vcpkg.sh   LICENSE.txt    README.md        triplets
buildtrees           NOTICE_pt.txt  README_pt.md     vcpkg
CONTRIBUTING.md      NOTICE.txt     README_vn.md     vcpkg.disable-metrics
CONTRIBUTING_pt.md   packages       README_zh_CN.md  versions
CONTRIBUTING_zh.md   ports          scripts
docs                 README_es.md   SECURITY.md
downloads            README_fr.md   shell.nix
[s5723321@w12002 vcpkg]$ cd packages/
[s5723321@w12002 packages]$ ls
alsa_x64-linux               libuuid_x64-linux
assimp_x64-linux             libvorbis_x64-linux
atk_x64-linux                libwebp_x64-linux
at-spi2-atk_x64-linux        libxml2_x64-linux
at-spi2-core_x64-linux       minizip-ng_x64-linux
blosc_x64-linux              minizip_x64-linux
boost-uninstall_x64-linux    mpi_x64-linux
brotli_x64-linux             ms-gsl_x64-linux
bullet3_x64-linux            opencolorio_x64-linux
bzip2_x64-linux              opencv4_x64-linux
cairo_x64-linux              opencv_x64-linux
catch2_x64-linux             openexr_x64-linux
cxxopts_x64-linux            opengl_x64-linux
detect_compiler_x64-linux    openjpeg_x64-linux
dirent_x64-linux             openmpi_x64-linux
double-conversion_x64-linux  openssl_x64-linux
draco_x64-linux              opensubdiv_x64-linux
egl_x64-linux                pango_x64-linux
eigen3_x64-linux             pcre2_x64-linux
embree3_x64-linux            pixman_x64-linux
ffmpeg_x64-linux             pkgconf_x64-linux
flatbuffers_x64-linux        polyclipping_x64-linux
fmt_x64-linux                protobuf_x64-linux
fontconfig_x64-linux         pthreads_x64-linux
freeglut_x64-linux           pthread_x64-linux
fribidi_x64-linux            pugixml_x64-linux
gdk-pixbuf_x64-linux         pybind11_x64-linux
getopt_x64-linux             pystring_x64-linux
gettext-libintl_x64-linux    python3_x64-linux
gettext_x64-linux            qtbase_x64-linux
giflib_x64-linux             quirc_x64-linux
glew_x64-linux               range-v3_x64-linux
glfw3_x64-linux              robin-map_x64-linux
glib_x64-linux               sdl2-image_x64-linux
gsl-lite_x64-linux           sdl2-mixer-ext_x64-linux
gtest_x64-linux              sdl2-mixer_x64-linux
gtk3_x64-linux               sdl2-net_x64-linux
harfbuzz_x64-linux           sdl2pp_x64-linux
hdf5_x64-linux               sdl2-ttf_x64-linux
icu_x64-linux                snappy_x64-linux
imath_x64-linux              sqlite3_x64-linux
jasper_x64-linux             sqlitecpp_x64-linux
jhasse-poly2tri_x64-linux    sqlite-modern-cpp_x64-linux
kubazip_x64-linux            stb_x64-linux
lcms_x64-linux               szip_x64-linux
libb2_x64-linux              tiff_x64-linux
libde265_x64-linux           utfcpp_x64-linux
libdeflate_x64-linux         vcpkg-boost_x64-linux
libepoxy_x64-linux           vcpkg-cmake-config_x64-linux
libffi_x64-linux             vcpkg-cmake-get-vars_x64-linux
libheif_x64-linux            vcpkg-cmake_x64-linux
libiconv_x64-linux           vcpkg-get-python-packages_x64-linux
libjpeg-turbo_x64-linux      vcpkg-get-python_x64-linux
liblzma_x64-linux            vcpkg-pkgconfig-get-modules_x64-linux
libogg_x64-linux             wavpack_x64-linux
libpng_x64-linux             x265_x64-linux
libpq_x64-linux              yaml-cpp_x64-linux
libraw_x64-linux             zlib_x64-linux
libsquish_x64-linux
[s5723321@w12002 packages]$ 








