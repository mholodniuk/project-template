#include "../inc/DummyClass.hpp"
#include <iostream>
#include <vector>

DummyClass::DummyClass(): 
    variable{} 
{
    std::cout << "Created ExampleClass1\n";
}

int DummyClass::foo() const
{
    int* pointer = nullptr;
    return variable;
}