// Adapter class

// when parent class is interface, and it has multiple child (like heirarcical inheritance one parent many child)
// then if any of its child class only want's its specific member function, and not other, then also that child class
// have to give body to all parent member function otherwise its object could not be created
// to avoide this we take one dummy class in between known as Adapter class which acts as adapter between two classes
// we inherit this adapter class from parent class and give dummy bodies to all parent member function in this class
// then from this adapter class we inherit child classes and give body to only required member function (override)

// adapter class is dummy class, don't make its object, its purpose is only for connectin b/e two classes

#include <iostream>

// interface
class IParent {
    public:

    virtual void fun() = 0;     //pure virtual function
    virtual void gun() = 0;
    virtual void run() = 0;
};

// Adapter class / Dummy class
class Adapter : public IParent {
    public:
    // dummy bodies to member function
    // all this have implicit virtual keyword present before return type.
    // we give virtual to improve redability
    virtual void fun() {

    }
    virtual void gun() {

    }
    virtual void run() {

    }
};

class Child1 : public Adapter {
    public:
    void fun() {
        std::cout << "fun" << std::endl;
    }
    void gun() {
        std::cout << "gun" << std::endl;
    }
};

class Child2 : public Adapter {
    public:
    void run() {
        std::cout << "run" << std::endl;
    }
};

int main() {

    // IParent obj1;    //error: cannot declare variable 'obj1' to be of abstract type 'IParent'
    // note:   because the following virtual functions are pure within 'IParent':

    Child1 obj1;
    obj1.fun();
    obj1.gun();


    Child2 obj2;
    obj2.run();


    return 0;
}