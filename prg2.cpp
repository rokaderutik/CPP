// single tone design pattern

#include <iostream>

class Demo {
    static Demo* obj;
    Demo() {

    }
    public:
    static Demo* getObject() {
        return obj;
    }
};

Demo* Demo::obj = new Demo();

int main() {

    Demo *obj1 = Demo::getObject();
    Demo *obj2 = Demo::getObject();
    Demo *obj3 = Demo::getObject();

    std::cout << obj1 << " -- " << obj2 << " -- " << obj3 << std::endl;
    return 0;
}