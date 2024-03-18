// static

#include <iostream>

class Demo {
    public:
    int x = 10;
    static const int y = 20;    //every object get seperate copy, but no one can change, here also it get memory on data section

    public:
    void fun() {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }
};

int main() {

    Demo obj1;
    Demo obj2;

    obj1.fun();
    obj2.fun();

    // obj1.y = 200;   //read only data as constant  

    std::cout << sizeof(obj1) << std::endl; //4
    std::cout << sizeof(obj2) << std::endl; //4

    return 0;
}