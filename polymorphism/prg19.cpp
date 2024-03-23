// virtual destructor
// use to solve memory leak problem

// only required when we use Parent reference and child object Parent *obj1 = new Child();
// without using virtual destructor child destructor is not called

// in other all cases problem does not come, does not matter where we created object on heap or stack, problem not come.

#include <iostream>

class Parent {
    public:
    Parent() {
        std::cout << "Parent constructor" << std::endl;
    }

    // virtual destructor
    virtual ~Parent() {
        std::cout << "Parent destructor" << std::endl;
    }
};

class Child : public Parent {
    int *ptr = NULL;
    public:
    Child() {
        ptr = new int[50];
        std::cout << "Child constructor" << std::endl;
    }

    ~Child() {
        std::cout << "Child destructor" << std::endl;
        delete[] ptr;
    }
};

int main() {

    Parent *obj1 = new Child();

    delete obj1;

    return 0;
}
/*
o/p: without virtual

Parent constructor
Child constructor
Parent destructor
*/

/*
o/p: with virtual

Parent constructor
Child constructor
Child destructor
Parent destructor
*/