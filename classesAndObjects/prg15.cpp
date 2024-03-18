// static and instance
// local static and non-static

#include <iostream>

class Demo {
    int x = 10;
    static int y;

    public:
    void disp() {
        int x = 100;
        static int y = 200;

        std::cout << "disp local: " << x << " " << y << std::endl;
        std::cout << "class: " << this->x << " " << this->y << std::endl;
    }

    static void info() {
        int x = 1000;
        static int y = 2000;

        std::cout << "info local: " << x << " " << y << std::endl;
        std::cout << "class: " << " " << Demo::y << std::endl;

    }
};

int Demo::y = 20;

int main() {

    Demo obj1;
    Demo *obj2 = new Demo();

    obj1.disp();
    obj1.info();

    std::cout << "----------" << std::endl;
    
    obj2->disp();
    obj2->info();

    return 0;
}