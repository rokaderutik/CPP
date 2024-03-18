// passing object as argument

#include <iostream>

class Demo {
    int x = 10;
    int y = 20;

    public:
    Demo() {
        std::cout << "In No Argument constructor" << std::endl;
        std::cout << x << " " << y << std::endl;
    }

    Demo(int x, int y) {
        this->x = x;
        this->y = y;
        std::cout << "In parameterised constructor" << std::endl;
        std::cout << x << " " << y << std::endl;
    }

    Demo(Demo &obj) {       
        std::cout << "In copy constructor" << std::endl;
    }

    void info(Demo obj) {       //copy construcot call -- (Demo obj = obj1) initilisation
        std::cout << x << " " << y << std::endl;
        std::cout << obj.x << " " << obj.y << std::endl;
    }
};

int main() {

    Demo obj1;
    Demo obj2(100, 200);

    std::cout << "-------" << std::endl;
    obj2.info(obj1);

    std::cout << "-------" << std::endl;
    obj1.info(obj2);


    return 0;
}