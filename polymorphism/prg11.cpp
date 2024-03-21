// pure virtual functions
// abstract classes and interfaces

#include <iostream>

// abstract class
class Parent {
    public:

    virtual void carrier() = 0;     //pure virtual function
    virtual void marry() = 0;
    virtual void property() {
        std::cout << "Home, land, farm, assests, money" << std::endl;
    }
};

// if we give pure virtual function a body like this, then also class remains abstract
// but we can call this function as Parent::carrier()
void Parent::carrier() {
    std::cout << "Parents choice" << std::endl;
}
//above body of parents function can be useful when parent make its function as pure virtual, thinking that
// child will override this function for sure, but child don't wan't to override it.

// and also when many classes inherit same parent class, and all wan't to give same body (defination) for this pure virtual function
//  then instaid of giving whole body they can only call this function from there functions body like Parent::carrier()
// it saves writing same code again and again in multiple classes

class Child1 : public Parent {
    public:
    void carrier() {
        Parent::carrier();
    }
    void marry() {
        std::cout << "Child1 choice" << std::endl;
    }
};

class Child2 : public Parent {
    public:
    void carrier() {
        Parent::carrier();
    }
    void marry() {
        std::cout << "Child2 choice" << std::endl;
    }
};

int main() {
    
    // Parent Obj1;     //object of abstract class type "Parent" is not allowed
    
    Parent *obj = new Child1();
    obj->carrier();
    obj->property();
    obj->marry();

    Parent *obj1 = new Child2();
    obj1->carrier();
    obj1->property();
    obj1->marry();

    obj->Parent::carrier();

    return 0;
}