// for object to be constant, all its member functions must be constant, so no can one can change its data from outside, inside.

#include <iostream>

class Demo {
    int x;
    public:
    Demo() {
        this->x = 100;
        std::cout << "constructor" << std::endl;
    }

    void getData() const {
        std::cout << x << std::endl;
        // x = 200;     //error: assignment of member 'Demo::x' in read-only object
    }
};

int main() {

    const Demo obj;
    obj.getData();

    return 0;
}