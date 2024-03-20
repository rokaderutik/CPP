// constructor - destructor calling sequence

#include <iostream>

class Parent {

    public:
    Parent() {
        std::cout << "In parent constructor" << std::endl;
    }
    ~Parent() {
        std::cout << "In parent destructor" << std::endl;
    }
};

class Child : public Parent {
    public:
    Child() {
        std::cout << "In child constructor" << std::endl;
    }
    ~Child() {
        std::cout << "In child destructor" << std::endl;
    }
};

int main() {

    Child obj1;
    Child *obj2 = new Child();

    delete obj2;

    return 0;
}