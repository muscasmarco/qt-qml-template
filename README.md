# qt-qml-template

This repository contains a simple template for Qt6/QML based projects.

# Building 

## Prerequisites

- `cmake`
- `ninja`
- `Qt6` installed somewhere

## User configuration

As you need to specify where **your** Qt6 installation folder is, the best thing you 
can do is copying the `CMakeUserPresets.json.example` file and customizing it 
to your needs. 

Your personal configuration shall be called `CMakeUserPresets.json`. 

## Build command

```bash
cmake --preset local

cd build/
ninja

./anynoise
```

### One-liner build and run command
```bash
cmake --preset local && ninja -C build/ && build/anynoise
```