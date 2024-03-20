// accesibilty
// in protected inheritance:
// private becomes private
// protected becomes protected
// public becomes protected

#include <iostream>

class Parent {
    int x = 10;
    protected:
    int y = 20;
    public:
    int z = 30;
};

class Child : protected Parent {
    public:
    void getData() {
        // std::cout << x << std::endl;     //private inaccessible here
        std::cout << y << z << std::endl;   //accessible
    }
};

int main() {

    Child obj1;
    // std::cout << x  << y << z << std::endl;      //undefined
    // std::cout << obj1.x  << obj1.y << obj1.z<< std::endl;     //inaccessible here

    obj1.getData();

    return 0;
}