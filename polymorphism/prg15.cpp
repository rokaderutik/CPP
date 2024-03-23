// static and virtual
// we can not use both virtual & static
// as due to static early binding is done

#include <iostream>

class Parent {
    public:
    static void getData() {
        std::cout << "Parent getData" << std::endl;
    }

    // error: member 'printData' cannot be declared both 'virtual' and 'static'
    // only nonstatic member functions may be virtual
    // virtual static void printData() {
    //     std::cout << "Parent printData" << std::endl;
    // }    
};

class Child : public Parent {
    public:
    static void getData() {
        std::cout << "Child getData" << std::endl;
    }
};

int main() {

    Parent *obj1 = new Child();
    obj1->getData();
    ((Child *)obj1)->getData();

    Child obj2;
    obj2.getData();

    return 0;
}
/*
o/p:
Parent getData
Child getData
Child getData
*/