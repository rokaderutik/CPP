// class reconstruction problem
// solve using virtual base class

// problem:
// grandParent class have one member function as fun(), it has two child Parent1 & Parent2
// Parent1 & Parent2 has child Class as common child, so if child class obj is created then grandParent class is constructed twice

#include <iostream>

class grandParent {
    public:
    grandParent() {
        std::cout << "grand Parent constructor" << std::endl;
    }
};

// virtual base class
class Parent1 : virtual public grandParent {
    public:
    Parent1() {
        std::cout << "Parent1 constructor" << std::endl;
    }
};

// virtual base class
class Parent2 : virtual public grandParent {
   public:
    Parent2() {
        std::cout << "Parent2 constructor" << std::endl;
    } 
};

// due to virtual base class, below line change compiler implicitly add public gradParent
// class Child : public grandParent, public Parent1, public Parent2
class Child : public Parent1, public Parent2 {
    public:
    Child() {
        std::cout << "Child constructor" << std::endl;
    }
};

int main() {

    Child obj1;


    return 0;
}
/*
o/p: without virtual

grand Parent constructor
Parent1 constructor
grand Parent constructor
Parent2 constructor
Child constructor
*/

/*
o/p: with virtual

grand Parent constructor
Parent1 constructor
Parent2 constructor
Child constructor
*/