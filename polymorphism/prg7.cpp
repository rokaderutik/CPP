// code for constant in overriding

// Rules for overriding:
//1. method signature should be identical
//2. return type should be identical or covarient
//3. constant

#include <iostream>

class Parent {

    public:

    // constant virtual member function
    virtual void getData(int x) const {
        std::cout << "Parent getData" << std::endl;
    }

    // constant virtual member function
    virtual void printData(int x) const {
        std::cout << "Parent printData" << std::endl;
    }

    // constant virtual member function
    virtual void accessData(int x) const {
        std::cout << "Parent accessData" << std::endl;
    }
};

class Child : public Parent {
    public:

    // no error
    // not override, method signature & return type matches, but it is not constant
    void getData(int x) {
        std::cout << "Child getData" << std::endl;
    }

    // error: 'void Child::printData(int)' marked 'override', but does not override
    //not overriding, method signature & return type matches, but it is not constant
    // void printData(int x) override{
    //     std::cout << "Child printData" << std::endl;
    // }

    // overriding, as all rules satisfied
    void accessData(int x) const override {
        std::cout << "Child accessData" << std::endl;
    }

};

int main() {

    Parent *obj1 = new Child();

    obj1->getData(10);
    obj1->printData(10);
    obj1->accessData(10);


    return 0;
}
/*
o/p:
Parent getData
Parent printData
Child accessData
*/