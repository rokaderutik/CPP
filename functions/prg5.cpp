// call by value, address, reference

#include <iostream>
int* gun() {
    int x = 200;
    return &x;      // warning: address of local variable 'x' returned 
}

void fun(int* ptr) {
    *ptr = 30;

}

int main() {

    int x = 10;

    std::cout << x << std::endl;
    fun(&x);
    std::cout << x << std::endl;

    int *ptr = gun();
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    return 0;
}