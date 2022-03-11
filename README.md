# C++ project template

## Structure
```
.
├── CMakeLists.txt
├── README.md
├── app
│   └── main.cpp
├── inc
│   ├── DummyClass.hpp
│   └── ExampleClass.hpp
└── src
    ├── DummyClass.cpp
    └── ExampleClass.cpp

```

## Build using CMake
```
mkdir build
cd build
cmake ..
```
if all goes well, you can:
```
make
./Example
```