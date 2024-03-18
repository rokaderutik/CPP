#include <iostream>

class Demo {
    int x;

    public:
    Demo(int x) {
        this->x = x;
    }
    void disp() {
        std::cout << x << std::endl;
    }
};

int main() {

    Demo obj2(20);
    obj2.disp();
    
    return 0;
}