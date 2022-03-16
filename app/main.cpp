#include "../inc/DummyClass.hpp"
#include "../inc/ExampleClass.hpp"
#include <iostream>
#include <memory>

int main()
{
    // used unique_ptr in order to require c++14
    std::unique_ptr<DummyClass> e1 = std::make_unique<DummyClass>();
    std::unique_ptr<ExampleClass> e2 = std::make_unique<ExampleClass>();
    e1->foo();
    e2->foo2();

    return 0;
}