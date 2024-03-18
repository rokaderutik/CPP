#include <iostream>

class Demo {
    public:
    Demo() {
        std::cout << "In constructor" << std::endl;
        std::cout << this << std::endl;
    }
};

int main() {

    Demo obj;
    std::cout << &obj << std::endl;
    
    return 0;
}