# Linux OpenGL Benchmarks
This is a source mirror of [Roy Longbottom's Linux OpenGL Benchmarks](http://www.roylongbottom.org.uk/linux%20opengl%20benchmarks.htm) for personal use only.
In addition, some source files have been thankfully retrieved from [Jérôme Reybert's power testsuite](https://github.com/jreybert/power).

# Dependencies
Ensure that the following requirements are install on your build host:
* OpenGL Utility Toolkit (GLUT), e.g. freeglut
* Netwide Assembler (NASM)

On Fedora you need to run:
```
sudo dnf install freeglut-devel nasm
```

## Build
make -C src

