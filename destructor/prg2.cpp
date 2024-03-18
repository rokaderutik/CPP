#include <iostream>

class Demo {
    public:
    Demo() {
        std::cout << "constructor" << std::endl;
    }
    ~Demo() {
        std::cout << "destructor" << std::endl;
    }
};

int main() {

    Demo obj1;      //destructor called implicitly
    Demo *obj2 = new Demo();    //we have to called its destructor explicitly using delete

    std::cout << "end main" << std::endl;
    delete obj2;

    return 0;
}