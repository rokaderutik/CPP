// final and override identifiers
// it is not keyword, it is special identifiers in cpp

// code for final

// we can make function and class as final
// if function is final, then it can not be override, and we can not have same method signature method in child
// if class is final, then we can not inherit it

// for function to be final it must be be virtual, we can not make function as final which is not virtual.

#include <iostream>

class Parent {
    public:
    
    // member function final
    virtual void getData() final {
        std::cout << "Parent getData" << std::endl;
    }
    // if we does not make it as virtual then,
    // error: 'void Parent::getData()' marked 'final', but is not virtual
};

// class is final
class Child final : public Parent {
    public:
    // error: virtual function 'virtual void Child::getData()'
    // error: overriding final function 'virtual void Parent::getData()'
    // void getData() {
    //     std::cout << "Child getData" << std::endl;
    // }
};

// error: cannot derive from 'final' base 'Child' in derived type 'Child2'
// class Child2 : public Child {

// };

int main() {

    Child obj;
    obj.getData();

    return 0;
}