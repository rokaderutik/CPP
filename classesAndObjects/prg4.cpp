//constructor

#include <iostream>

class Demo {
    int x = 10;
    int y = 20;

    public:
    Demo() {
        std::cout << "In Constructor" << std::endl;
    }

    void fun() {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }

};
int main() {

    Demo obj;
    obj.fun();
    std::cout << sizeof(obj) << std::endl;

    return 0;
}