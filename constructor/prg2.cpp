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
};

int main() {

    Demo obj{}; //calls to No Argument constructor

    Demo obj1;
    Demo *obj2 = new Demo();

    Demo obj3(20);
    Demo *obj4 = new Demo(30);
    
    return 0;
}