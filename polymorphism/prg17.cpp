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

// virtual base class
class Parent1 : virtual public grandParent {
    
};

// virtual base class
class Parent2 : virtual public grandParent {
    
};

// due to virtual base class, below line change compiler implicitly add public gradParent
// class Child : public grandParent, public Parent1, public Parent2
class Child : public Parent1, public Parent2 {

};

int main() {

    Child obj1;

    // without virtual base class
    // error: request for member 'getData' is ambiguous
    // obj1.getData();

    obj1.getData();

    return 0;
}