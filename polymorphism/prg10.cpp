// pure virtual functions
// abstract classes and interfaces

// pure virtual functions or abstract function is function which has no body in parent class.
// abstract function must be virtual
// abstract function is known as pure virtual function
// class which have any one of its member function as abstract is known as abstract class
// class which has all its member function abstract is known as interaface.
// abstract class is incomplte class & obj is created only of concreate (complete) class

#include <iostream>

// abstract class
class Parent {
    public:

    virtual void carrier() = 0;     //pure virtual function
    virtual void property() {
        std::cout << "Home, land, farm, assests, money" << std::endl;
    }
};

class Child : public Parent {
    public:
    void carrier() {
        std::cout << "My choice" << std::endl;
    }
};

int main() {
    
    // Parent Obj1;     //object of abstract class type "Parent" is not allowed
    
    Parent *obj = new Child();
    obj->carrier();
    obj->property();

    return 0;
}