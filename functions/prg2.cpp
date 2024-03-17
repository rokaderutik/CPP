// g++ -S prg2.cpp
// for assembly code


#include <iostream>

inline int sum(int x, int y) {
    return x+y;
}

int main() {

    std::cout << sum(100, 200) << std::endl;

    return 0;
}