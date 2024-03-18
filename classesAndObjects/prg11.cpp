// static
// static variables has only declarations in class, they does not have memory in object, they get memory in data section

#include <iostream>


class Demo {
    public:
    int x = 10;
    static int y;
    void fun();
};

int Demo::y = 20;

void Demo::fun() {
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}
int main() {

    Demo obj1;
    Demo obj2;

    obj1.fun();
    obj2.fun();

    obj1.x = 100;
    obj1.y = 200;

    obj1.fun();
    obj2.fun();   

    std::cout << sizeof(obj1) << std::endl;     //4 -- as only x get memory in object, static has only declartion in class it has memory in Data Section
    return 0;
}