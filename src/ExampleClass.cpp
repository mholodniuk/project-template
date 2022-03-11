#include "../inc/ExampleClass.hpp"
#include <iostream>

ExampleClass::ExampleClass(): 
    variable{} 
{
    std::cout << "Created ExampleClass2\n";
}

int ExampleClass::foo2() const
{
    return variable + 10;
}