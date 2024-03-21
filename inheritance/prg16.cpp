// Multiple inheritance

#include <iostream>

class Parent1 {
    public:
    Parent1() {
        std::cout << "Parent1 const" << std::endl;
    }
};

class Parent2 {
    public:
    Parent2() {
        std::cout << "Parent2 const" << std::endl;
    }
};

// constructor calling sequence is from left to right
class Child : public Parent1, public Parent2 {
    public:
    Child() {
        std::cout << "child const" << std::endl;
    }
};

int main() {

    Child obj1;

    return 0;
}