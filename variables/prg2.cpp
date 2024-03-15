// variable shadowing
// local variable shadowing
// variable name must be same for shadowing

#include <iostream>

int main() {

    int x = 10;     //local
    std::cout << x << std::endl;

    {
        int x = 20;
        std::cout << x << std::endl;        //local

        // std::cout << ::x << std::endl;       //global scope has no x 
        // we can only access global variable using :: operator

        x = 30;
        std::cout << x << std::endl;
    }

    std::cout << x << std::endl;

    return 0;
}