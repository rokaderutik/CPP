//global level shadowing
// variable name must be same for shadowing

#include <iostream>

int x = 100;       //global

int main() {

    int x = 10;     //local
    std::cout << x << std::endl;

    {
        int x = 20;     //local
        std::cout << x << std::endl;    //20

        std::cout << ::x << std::endl;  //100 global

        x = 30;
        std::cout << x << std::endl;    //30
    }

    std::cout << x << std::endl;    //10
    std::cout << ::x << std::endl;  //100

    return 0;
}