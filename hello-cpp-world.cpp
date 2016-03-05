#include <iostream>
#include <memory>
#include "test.h"
//alan uthoff



int main() {
   std::unique_ptr<interface>  iptr(new anotherClass());
    iptr->foo();
    std::cout << "Hello World!" << std::endl;
}


