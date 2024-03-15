//reference variable

#include <iostream>

int main() {

    int x = 10;
    
    int &y = x;     //reference var
    // int &z;      //reference variable "z" requires an initializer
    // reference variable must be initialise

    int *ptr = &x;  //pointer
    int *ptr1 = NULL;   //pointer

    std::cout << &x << std::endl;
    std::cout << &y << std::endl;

    std::cout << y << std::endl;

    return 0;
}