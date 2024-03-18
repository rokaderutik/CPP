#include <iostream>

// we can not use this(), as this is pointer and we can not use () on it like function
class Demo {
    public:
    int x = 10;
    public:
    Demo() {
        // this(100);
        Demo(100);  //creates new object
        std::cout << "In No Argument constructor" << std::endl;
        std::cout << x << std::endl;
        std::cout << this << std::endl;
    }

    Demo(int x) {
        // this();  //wrong
        // Demo();  //allowed
        // Demo(this);  //not allowed as we can not sent our object to our copy constructor
        std::cout << "In parameterised constructor" << std::endl;
        this->x = x;
        std::cout << this->x << " " << x << std::endl;
        std::cout << this << std::endl;
    }
};

int main() {

    Demo obj1;
    
    return 0;
}