// object reference and pointers in overriding

#include <iostream>

class Parent {
    public:
    virtual void getData(int x) {       //method signature -> getData(int)
        std::cout << "Parent getData" << std::endl;
    }

    virtual void printData(float x) {       //method signature -> printData(float)
        std::cout << "Parent printData" << std::endl;
    }
};

class Child : public Parent {
    public:
    void getData(short int x) {         //method signature -> getData(short int)
        std::cout << "Child getData" << std::endl;
    }

    void printData(float x) {           //method signature -> printData(float)
        std::cout << "Child printData" << std::endl;
    }
};

int main() {

    //type 1    
    // Parent pointer, child object
    // pointer on stack and obj on heap
    Parent *obj1 = new Child();
    
    // no overriding as method signature are not same
    obj1->getData(10);
    // overriding as method signature are same
    obj1->printData(20.5f);

    // type 2
    // Parent pointer, child object
    // pointer and obj both are on stack
    Child obj2;
    Parent *obj3 = &obj2;

    obj3->getData(10);
    obj3->printData(20.5f);


    //type 3
    // Parent reference, child object
    // both on stack
    Child obj4;
    Parent& obj5 = obj4;
    obj5.getData(10);
    obj5.printData(20.5f);
    

    return 0;
}
/*
o/p:
Parent getData
Child printData
Parent getData
Child printData
Parent getData
Child printData
*/