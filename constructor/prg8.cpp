#include <iostream>

class Demo {
    int x = 10;
    int y = 20;

    public:
    Demo() {
        std::cout << "In No Argument constructor" << std::endl;
    }

    Demo(int x = 50, int y = 60) {
        this->x = x;
        this->y = y;
        std::cout << "In parameterised constructor" << std::endl;
    }

    void disp() {
        std::cout << x << " " << y << std::endl;
    }
};

int main() {

    // Demo obj1;   //2 match function, ambiguity
    Demo obj2(100);
    obj2.disp();
    
    return 0;
}