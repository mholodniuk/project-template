#include "../inc/ExampleClass.hpp"
#include <iostream>

constexpr int ten = 10;

ExampleClass::ExampleClass(): 
    variable{} 
{
    std::cout << "Created ExampleClass2\n";
}

void ExampleClass::foo2() const
{
    std::cout << variable + ten << std::endl;
}