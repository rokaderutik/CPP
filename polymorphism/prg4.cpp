// primitive and covarient return type in overriding

// Rules for overriding:
//1. method signature should be identical
//2. return type should be identical or covarient
//3. constant (see prg7)

// covarient means type of its any parent

#include <iostream>

class Parent {
    public:
    virtual Parent* getData() {
        std::cout << "Parent getData" << std::endl;
        return new Parent();
        // return new Child();  //work as Child is covarient with Parent
        // return this;
    }

    virtual Parent* printData() {
        std::cout << "Parent printData" << std::endl;
        // return new Child();  //work as Child is covarient with Parent
        // return new Parent();
        return this;
    }


    //we can not give Child* as return type as by giving this we have return Child obj,
    //  and child class is not complete yet so we can not return its object

    // virtual Child* accessData() {
    //     std::cout << "parent accessData" << std::endl;
    //     // return new Parent(); //NOT WORK as new Parent() is not same or covarient with child*
    //     // return this; //NOT WORK as new Parent() is not same or covarient with child*
    //     return new Child();
    // }

    // we have to give return type only as Parent* in Parent class
    // we can give return type as Parent* or Child* in child class

};

class Child : public Parent {
    public:
    Parent* getData() {
        std::cout << "Child getData" << std::endl;
        return new Child(); //work as Child is covarient with Parent
        // return this; //work
        // return new Parent(); //work
    }

    Child* printData() {
        std::cout << "child printData" << std::endl;
        // return new Parent(); //NOT WORK as new Parent() is not same or covarient with child*
        // return this;
        return new Child();
    }


    // if give return type below as Parent*
    // error:return type is not identical to nor covariant with return type "Child *" of overridden virtual function "Parent::accessData"
    // Child* accessData() {
    //     std::cout << "parent accessData" << std::endl;
    //     // return new Parent(); //NOT WORK as new Parent() is not same or covarient with child*
    //     return this;
    //     // return new Child();
    // }

};

int main() {

    
    Parent *obj1 = new Child();

    obj1->getData();    //overriding
    // as method signature are same and return type Parent* and Parent* are same

    obj1->printData();  //overriding
    // as method signature are same and return type Parent* and Child* are covarient
    

    return 0;
}