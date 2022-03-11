#include "../inc/DummyClass.hpp"
#include "../inc/ExampleClass.hpp"
#include <iostream>
#include <memory>

int main(int argc, char* argv[])
{
    // used unique_ptr in order to require c++14
    std::unique_ptr<DummyClass> e1 = std::make_unique<DummyClass>();
    std::unique_ptr<ExampleClass> e2 = std::make_unique<ExampleClass>();
    std::cout << e1->foo() << std::endl;
    std::cout << e2->foo2() << std::endl;

    return 0;
}