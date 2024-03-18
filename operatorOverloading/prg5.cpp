// using member function

#include <iostream>

class Demo {
    int x = 10;
    public:
    Demo(int x) {
        this->x = x;
    }

    int operator+(const Demo &obj2) {
        return this->x + obj2.x;
    }
};

int main() {

    Demo obj1(100);
    Demo obj2(50);

    std::cout << obj1 + obj2 << std::endl;      //internally -> obj1.operator+(obj2) -> operator+(this, obj2)

    return 0;
}