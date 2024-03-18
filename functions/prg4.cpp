// Name Mangling
// function overloading

#include <iostream>


void fun(int x, int y) {
    std::cout << "ii" << x << " " << y << std::endl;
}

void fun(int x, float y) {
    std::cout << "if" << x << " " << y << std::endl;
}

void fun(float x, int y) {
    std::cout << "fi" << x << " " << y << std::endl;
}

void fun(float x, float y) {
    std::cout << "ff" << x << " " << y << std::endl;
}

int main() {

    fun(10, 20);
    fun(10, 20.5f);
    fun(10.5f, 20);
    fun(10.5f, 20.5f);
    // fun(10.3, 20.3);
    fun('a', 'b');

    return 0;
}