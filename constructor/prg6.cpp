#include <iostream>

class Demo {
    public:
    int x = 10;
    public:
    Demo() {
        std::cout << "In No Argument constructor" << std::endl;
    }

    Demo(int x) {
        std::cout << "In parameterised constructor" << std::endl;
    }

    Demo(Demo &obj) {       //Demo(const Demo &obj) works and it has only read access
        std::cout << "In copy constructor" << std::endl;
    }

    void fun() {
        std::cout << x << std::endl;
        std::cout << this->x << std::endl;
    }
};

int main() {

    Demo obj1;
    Demo obj2 = obj1;

    std::cout << obj1.x << std::endl;
    std::cout << obj2.x << std::endl;

    obj2.x = 50;

    std::cout << obj1.x << std::endl;
    std::cout << obj2.x << std::endl;
    
    return 0;
}