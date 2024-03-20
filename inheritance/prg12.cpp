//parent & child have same variable and function 
// 3 ways to call parent member functions using child reference

#include <iostream>

class Parent {
    int x = 10;
    public:
    Parent() {

    }
    Parent(Parent& obj) {
        std::cout << "parent copy constructor" << std::endl;
    }

    void getData() {
        std::cout << "parent: " << x << std::endl;
    }
};

class Child : public Parent {
    int x = 20;
    public:
    Child() {

    }
    Child(Child& obj) {
        std::cout << "child copy constructor" << std::endl;
    }

    void getData() {
        std::cout << "child: " << x << std::endl;
        Parent::getData();  //1st way
    }
};

int main() {

    Child obj1;     //child obj & child reference
    obj1.getData();     //20

    // 2nd way
    (Parent(obj1)).getData();   //typecast
    ((Parent)obj1).getData();   //typecast
    // both are same
    // in this way of typecasting one new copy of parent obj is created

    // 3rd way
    obj1.Parent::getData();


    //see type casting 
    // Parent *obj2 = new Child();
    // obj2->getData();

    // ((Child *)obj2)->getData();
    // ((Child *)(obj2))->getData();
    // same

    // Child *obj3 = new Child();
    
    // ((Parent *)obj3)->getData();



    return 0;
}