// size of parent and child object

#include <iostream>

class Parent {
    int x = 10;
    int y = 20;
};

class Child : public Parent {
    int z = 30;
};

int main() {

    Parent obj1;
    Child obj2;

    std::cout << sizeof(obj1) << std::endl;
    std::cout << sizeof(obj2) << std::endl;

    return 0;
}