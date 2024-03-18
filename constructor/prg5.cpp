#include <iostream>

class Demo {
    int x = 10;
    int y = 20;

    public:
    Demo() {
        std::cout << "In No Argument constructor" << std::endl;
    }

    Demo(int x, int y) {
        this->x = x;
        this->y = y;
        std::cout << "In parameterised constructor" << std::endl;
    }

    Demo(Demo &obj) {       
        std::cout << "In copy constructor" << std::endl;
    }
};

int main() {

    Demo obj1;
    Demo obj2(100, 200);
    Demo obj3(obj1);
    Demo obj4 = obj1;
    Demo obj5;
    obj5 = obj1;        //assignment, no copy constructor call as it is nt object coping
    
    return 0;
}