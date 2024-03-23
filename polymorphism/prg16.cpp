// Diamond problem
// solve using virtual base class

// problem:
// grandParent class have one member function as fun(), it has two child Parent1 & Parent2
// Parent1 & Parent2 has child Class as common child, so in child class it get two fun() copies by its 2 parent
// and get ambiguity.

#include <iostream>

class grandParent {
    public:
    void getData() {
        std::cout << "grand Parent getData" << std::endl;
    }
};

class Parent1 : public grandParent {
    
};

class Parent2 : public grandParent {
    
};

class Child : public Parent1, public Parent2 {

};

int main() {

    Child obj1;

    // error: request for member 'getData' is ambiguous
    // obj1.getData();

    // can solve problem, but not appropriate solution of problem
    // appropriate solution is in prg17.cpp using virtual base class
    obj1.Parent1::getData();
    obj1.Parent2::getData();
    Parent1(obj1).getData();
    Parent2(obj1).getData();

    return 0;
}