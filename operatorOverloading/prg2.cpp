// arithmatic operator
// using friend function

#include <iostream>

class Demo {
    int x = 10;
    public:
    Demo(int x) {
        this->x = x;
    }
    friend int operator+(const Demo&, const Demo&);
};

int operator+(const Demo &obj1, const Demo &obj2) {

    return obj1.x + obj2.x;
}

int main() {

    Demo obj1(10);

    std::cout << obj1 + 100 << std::endl;

    std::cout << 100 + obj1 << std::endl;

    std::cout << obj1 + 100.50 << std::endl;

    std::cout << obj1 + 'A' << std::endl;

    return 0;
}
// here compiler does implicit type casting of int, double, char into the Demo
// that's way we get proper answer without any warning and errors
// but if there is more than one instance variable in class then it fails to typecast
// as it does not get for which variable should it give this value
// avoid this type implicit casting
// write matching functions instaid