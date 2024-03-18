// call by value, address, reference

#include <iostream>

int main() {

    int x = 10;
    int y = 20;

    int &ref = x;       //internally -> int *ref = &x

    std::cout << x << std::endl;
    std::cout << ref << std::endl;

    ref = y;            //internally -> *ref = y

    std::cout << ref << std::endl;
    std::cout << x << std::endl;

    return 0;
}