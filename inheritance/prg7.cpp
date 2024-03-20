// trying to send data from child constructor to parent constructor
// no temporary object created

#include <iostream>

class Parent {
    int x = 10;
    int y = 20;

    public:

    Parent() {
        std::cout << "In no argument constructor" << std::endl;
        std::cout << "In parents no argument this: " << this << std::endl;
    }

    Parent(int x, int y) {
        this->x = x;
        this->y = y;
        std::cout << "In parameterised constructor" << std::endl;
        std::cout << "In parents parameterised this: " << this << std::endl;
    }
    ~Parent() {
        std::cout << "In parent destructor" << std::endl;
        std::cout << "this: " << this << std::endl;
    }
};

class Child : private Parent {
    int z = 30;
    public:
    Child(int x, int y, int z) : Parent(x, y) {  // or : Parent{x, y}

        std::cout << "In child constructor" << std::endl;
        std::cout << "In child this: " << this << std::endl;
        this->z = z;
    }
    ~Child() {
        std::cout << "In child destructor" << std::endl;
    }
};

int main() {

    Child obj1(40, 50, 60);

    return 0;
}