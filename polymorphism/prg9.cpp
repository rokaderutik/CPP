// for virtual compiler adds one pointer in public section of parent class, of type void*,
// its name may be _vptr, it initialises in parent constructor, and it get inherited by its child
// for every class Parent, child both have its own separate vTable or method table, and _vptr points to that table
// intially _vptr initilises in Parent constructor to stored Parent VTable address, later whichever childs object is created 
// it inherit this _vptr, and after that _vptr start point to that childs VTable
// VTable is array (array of function pointer) which stores address of member functions.
// Parent VTable has all its memeber function address
// child VTable has all its own member function address as well as addresses of member functions which are come through inheritance.
// _vptr is only one for all classes which are in parent child relation
// VTable is seperate for every class

// if Parent class obj is created, then only its VTable is come in picture, & _vptr stores its address.
// if child1 obj is craeted, then Parent & child1 VTable is created. In Parent constructor _vptr is initialise with Parent VTables address 
// then later in child1 constructor _vptr value is change, & now its store child1's VTable address.
// and due to this on child1 obj instaid of parent reference, its call to child functions.


#include <iostream>

class Parent {
    public:

    virtual void getData() {
        std::cout << "Parent getData" << std::endl;
    }

    virtual void printData() {
        std::cout << "Parent printData" << std::endl;
    }
};

class Child1 : public Parent {
    public:
    void getData() {
        std::cout << "Child1 getData" << std::endl;
    }

    virtual void setData() {
        std::cout << "Child1 setData" << std::endl;
    }
};

class Child2 : public Parent {
    public:
    void printData() {
        std::cout << "Child2 printData" << std::endl;
    }
};

int main() {

    Parent *obj1 = new Child1();

    obj1->getData();
    obj1->printData();
    

    return 0;
}