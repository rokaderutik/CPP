// variable shadowing
// local variable shadowing
// variable name must be same for shadowing

#include <iostream>

int main() {

    int x = 10;     //local to main
    {
        int x = 20;     //local to scope
        std::cout << x << std::endl;

        x = 30;
    }
    std::cout << x << std::endl;

    return 0;
}