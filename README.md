# C++ project template

## Structure
```
.
├── CMakeLists.txt
├── README.md
├── app
│   └── main.cpp
├── docs
│   └── Doxyfile.in
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
./name-of-your-project
```
The documentation is provided by Doxygen, you can find it in [docs](docs/) directory after running `make`.

Find out more about Doxygen [here](https://www.doxygen.nl/index.html).