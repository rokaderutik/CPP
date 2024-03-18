// initiliser list to object
// only allowed in public specifiers
// only for instance variables

#include <iostream>
class Demo {
    public:
    int x;
    int y;

    public:
    void info() {
        std::cout << this << std::endl;
        std::cout << this->x << std::endl;
        std::cout << this->y << std::endl;
    }
};
int main() {

    //on stack
    Demo obj1 = {10, 20};   //with =
    std::cout << &obj1 << std::endl;
    obj1.info();

    //on stack
    Demo obj2 {100, 200};       //without =
    std::cout << &obj2 << std::endl;
    obj2.info();

    // on heap
    // Demo *obj3 = new Demo() {10, 20};    //error:can not give initiliser list for oobjects on heap as there is no fix address
    Demo *obj3 = new Demo();
    std::cout << obj3 << std::endl;
    obj3->x = 50;
    obj3->y = 60;
    obj3->info();
    return 0;
}