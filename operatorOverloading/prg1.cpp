// 3 ways to overload operators
// friend function
// member function
// normal function

// arithmatic operator
// using friend function

#include <iostream>

class Demo {
    int x = 10;
    public:
    Demo(int x) {
        this->x = x;
    }
    friend int operator+(const Demo&, const Demo&);
};

int operator+(const Demo &obj1, const Demo &obj2) {

    return obj1.x + obj2.x;
}

int main() {

    Demo obj1(10);
    Demo obj2(20);

    std::cout << obj1 + obj2 << std::endl;

    return 0;
}