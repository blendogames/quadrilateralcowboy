# Build Instructions

Quadrilateral Cowboy uses [flibit](https://icculus.org/finger/flibitijibibo)'s build system for Linux, and their homepage includes guidance on how to set up a CentOS Linux build environment.

To build Quadrilateral Cowboy on a Debian-based Linux system, run the following commands:

```sh
# install build tools
$ apt install build-essential cmake m4

# install compilation dependencies
$ apt install libopenal-dev libsdl2-dev

# run libGL-related macros
$ sh -x flibitGLIMP.sh

# generate build files using cmake
$ cmake .

# compile the game
$ make
```
