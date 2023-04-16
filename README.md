# LVGL Simulator for VSCode

[English](README.md) | [中文](README_CN.md)

## Support Platform

- [x] Linux
- [ ] MacOS
- [ ] Windows

## Build && Run

### Install software dependencies

- gcc
- make/ninja-build
- CMake

### Build

Use make

```shell
mkdir build && cd build
cmake ..
make -j$(nproc)
```

Or use ninja

```shell
mkdir build && cd build
cmake -G Ninja ..
ninja
```

### Run

```shell
# cd buid dir
./lvgl-sdl-simulator
```
