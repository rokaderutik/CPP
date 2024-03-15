// constant

#include <iostream>

int main() {

    int x = 10;
    int y = 20;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    const int *ptr = &x;    //data constant(int)
    std::cout << *ptr << std::endl;

    ptr = &y;
    std::cout << *ptr << std::endl;

    //*ptr = 40;  //data is constant using pointer (we can not change data using pointer)

    x = 30;
    std::cout << x << std::endl;

    return 0;
}