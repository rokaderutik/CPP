#include <iostream>

class Demo {
    int x = 10;
    public:
    Demo() {
        std::cout << "In No Argument constructor" << std::endl;
        std::cout << x << std::endl;
    }

    Demo(int x) {
        std::cout << "In parameterised constructor" << std::endl;
        std::cout << x << std::endl;
    }

    Demo(Demo &obj) {       //Demo(const Demo &obj) works and it has only read access
        std::cout << "In copy constructor" << std::endl;
    }
};

int main() {

    Demo obj1;
    Demo obj2(20);
    Demo obj3(obj1);
    Demo obj4 = obj1;
    
    return 0;
}