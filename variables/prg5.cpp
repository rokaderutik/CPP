// constant

#include <iostream>

int main() {

    int y;
    std::cin >> y;

    const int x = y;    //constant requires compile time constant binding

    std::cout << x << std::endl;

    return 0;
}