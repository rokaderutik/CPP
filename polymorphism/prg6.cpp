// final and override identifiers
// it is not keyword, it is special identifiers in cpp

// code for override

// when we write member function as override, then compiler at compile time checks that, this function should 
// follow all rules for overriding, if it does not follow all rules of overriding then it gives error, 
// that it is not overriding

#include <iostream>

class Parent {

    public:
    virtual void getData(int x) {
        std::cout << "Parent getData" << std::endl;
    }

    virtual void printData(int x) {
        std::cout << "Parent printData" << std::endl;
    }
};

class Child : public Parent {

    public:

    // error: 'void Child::getData(short int)' marked 'override', but does not override
    // void getData(short int x) override {
    //     std::cout << "Child getData" << std::endl;
    // }

    void printData(int x) override {
        std::cout << "Child printData" << std::endl;
    }
};

int main() {

    Parent *obj = new Child();
    obj->getData(10);
    obj->printData(10);

    return 0;
}