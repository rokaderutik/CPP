// using friend function

#include <iostream>

class Demo {
    int x;
    int y;
    public:
    Demo(int x, int y) {
        this->x = x;
        this->y = y;
    }

    friend int operator*(const Demo &obj1, const Demo &obj2);
};

int operator*(const Demo &obj1, const Demo &obj2) {
    return obj1.x * obj2.y;
}

int main() {

    Demo obj1(10, 20);
    Demo obj2(20, 10);

    std::cout << obj1 * obj2 << std::endl;

    return 0;
}