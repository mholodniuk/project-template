#include "../inc/DummyClass.hpp"
#include <iostream>

DummyClass::DummyClass(): 
    variable{} 
{
    std::cout << "Created ExampleClass1\n";
}

int DummyClass::foo() const
{
    return variable + 20;
}