// temporory object
// calling other constructor from constructor

#include <iostream>

class Demo {
    int x = 10;
    public:
    Demo() {
        std::cout << "constructor" << std::endl;
        std::cout << x << std::endl;
    }
    Demo(int x) {
        this->x = x;
        std::cout << "para constructor" << std::endl;
        std::cout << x << std::endl;

        Demo();     //tempory object created

        std::cout << "para constructor end" << std::endl;
    }
    
    ~Demo() {
        std::cout << "destructor" << std::endl;
    }
};

int main() {

    Demo obj(100);
    std::cout << "end main" << std::endl;

    return 0;
}