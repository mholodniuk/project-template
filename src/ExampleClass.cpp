#include "../inc/ExampleClass.hpp"
#include <iostream>

ExampleClass::ExampleClass(): 
    variable{} 
{
    std::cout << "Created ExampleClass2\n";
}

void ExampleClass::foo2()
{
    std::cout << variable + 10 << std::endl;
}