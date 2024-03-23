// single tone design pattern

// only one object is created of class
// as constructor is private we can not make object from outside

#include <iostream>

class Demo {

    private:
    Demo() {

    }

    public:
    static Demo* obj;
    static Demo* getObject() {
        return obj;
    }
};

Demo* Demo::obj = new Demo();

int main() {

    Demo *ptr1 = Demo::getObject();
    Demo *ptr2 = Demo::getObject();
    Demo *ptr3 = Demo::getObject();

    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;
    std::cout << ptr3 << std::endl;

    return 0;
}