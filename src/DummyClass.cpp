#include "../inc/DummyClass.hpp"
#include <array>
#include <iostream>

DummyClass::DummyClass(): 
    variable{} 
{
    std::cout << "Created ExampleClass1\n";
}

void DummyClass::foo()
{
    std::array<int, 3> arr = {1, 2, 3};
    for(int it: arr) {
        std::cout << it <<  " ";
    }
    std::cout<<std::endl;
}