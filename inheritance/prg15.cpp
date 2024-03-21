// changing scope of access specifiers
// we can only able to change scope of those variables, functions which are come through inheritance in our class and
// which are accessible in our class, means private of parent is inherited but not accessible (directly) in child so we can not 
// change its scope
// we can decrease scope and increase scope

#include <iostream>

class Parent {
    int x = 10;
    protected:
    int y = 20;
    public:
    int z = 30;
    void getData() {
        std::cout << "parent: " << std::endl;
    }
};

class Child : public Parent {
    using Parent::getData;      //changing its scope public to private
    public:
    using Parent::y;    //changing its scope protected to public

    // using Parent::x; //we can not change its scope as it is private and not accessible here
};

int main() {

    Child obj1;
    // obj1.getData();     //error: 'void Parent::getData()' is inaccessible within this context

    std::cout << obj1.y << obj1.z << std::endl;

    return 0;
}