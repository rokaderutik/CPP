// using normal function

#include <iostream>

class Demo {
    int x = 10;
    public:
    Demo(int x) {
        this->x = x;
    }
    int getData() const {
        return x;
    }
};

int operator+(const Demo &obj1, const Demo &obj2) {
    return obj1.getData() + obj2.getData();
}

int main() {

    Demo obj1(100);
    Demo obj2(200);

    std::cout << obj1 + obj2 << std::endl;

    return 0;
}