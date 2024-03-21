// method signature in overriding

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

    Parent *obj3 = new Child();
    
    // no overriding as method signature are not same
    obj3->getData(10);

    // overriding as method signature are same
    obj3->printData(20.5f);
    

    return 0;
}