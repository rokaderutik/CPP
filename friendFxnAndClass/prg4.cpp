// member function as friend function

#include <iostream>

class One;
class Two {
    public:
    Two() {
        std::cout << "constructor" << std::endl;
    }
    void accessData(const One &obj);
};

class One {
    int x = 10;

    protected:
    int y = 20;

    public:
    One() {
        std::cout << "constructor" << std::endl;
    }

    friend void Two::accessData(const One &obj);
};

void Two::accessData(const One &obj) {
    std::cout << obj.x << "  " << obj.y << std::endl;
}

int main() {

    One obj1;
    Two obj2;

    obj2.accessData(obj1);

    return 0;
}