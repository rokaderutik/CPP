// passing object as argument and returning object

#include <iostream>

class Demo {
    public:
    Demo() {
        std::cout << "In No Argument constructor" << std::endl;
    }

    Demo(int x, int y) {
        std::cout << "In parameterised constructor" << std::endl;
    }

    Demo(Demo &obj) {       
        std::cout << "In copy constructor" << std::endl;
    }
};

int main() {

    Demo obj1;
    Demo obj2;
    Demo obj3;

    Demo arr[] = {obj1, obj2, obj3};

    return 0;
}