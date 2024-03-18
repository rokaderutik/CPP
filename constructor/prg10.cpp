// passing object as argument and returning object

#include <iostream>

class Demo {
    int x = 10;
    int y = 20;

    public:
    Demo() {
        std::cout << "In No Argument constructor" << std::endl;
        std::cout << x << " " << y << std::endl;
        std::cout << "-------" << std::endl;
    }

    Demo(int x, int y) {
        this->x = x;
        this->y = y;
        std::cout << "In parameterised constructor" << std::endl;
        std::cout << x << " " << y << std::endl;
        std::cout << "-------" << std::endl;
    }

    Demo(Demo &obj) {       
        std::cout << "In copy constructor" << std::endl;
        std::cout << "-------" << std::endl;
    }

    Demo& info(Demo &obj) {       //copy constructor called if obj is pass by value -- (Demo obj = obj1) initilisation
        obj.x = 700;
        obj.y = 800;
        return obj;
    }

    void access() {
        std::cout << x << " " << y << std::endl;
        std::cout << "-------" << std::endl;
    }
};

int main() {

    Demo obj1;
    Demo obj2(100, 200);

    std::cout << "-------" << std::endl;
    Demo obj3 = obj2.info(obj1);    //copy constructor , original class objects replica is created

    obj1.access();  //700 800

    obj3.access();  //10 20


    return 0;
}