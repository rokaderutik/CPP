//Name Mangling
// can see in assembly level code
// g++ -S prg2.cpp


#include <iostream>

// __Z3sumii
int sum(int x, int y) {
    return x+y;
}

// __Z3sumiif
int sum(int x, int y, float z) {
    return x+y+z;
}

int main() {

    std::cout << sum(100, 200) << std::endl;
    std::cout << sum(100, 200, 100.50) << std::endl;

    return 0;
}