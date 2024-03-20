//parent & child have same variable and function 

#include <iostream>

class Parent {
    int x = 10;
    public:
    void getData() {
        std::cout << "parent: " << x << std::endl;
    }
};

class Child : public Parent {
    int x = 20;
    public:
    void getData() {
        std::cout << "child: " << x << std::endl;
    }
};

int main() {

    // at compile time there is no object, so at compile time binding is done using reference.
    // at compile time binding member functions of that class are binded to objects which's reference is use to create object.

    Child obj1;     //child obj & child reference
    obj1.getData();     //20 as child obj & child reference -> compile time binding of obj1 is done with childs getData()

    Parent *obj2 = new Child();     //child obj & parent reference
    obj2->getData();    //10 , compile time binding, early binding -> compile time binding of obj2 is done with parents getData()

    return 0;
}