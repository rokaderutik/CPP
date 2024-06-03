// constant

#include <iostream>

int main() {

    int x = 10;
    int y = 20;

    int const *ptr1 = &x;   //data using pointer constant

    int * const ptr2 = &y;

    // *ptr1 = 30; //data using pointer constant
    ptr1 = &y;

    *ptr2 = 40;
    // ptr2 = &x;     //pointer constant

    int z = 50;
    int const * const ptr3 = &z;    //pointer constant, data constant
    // ptr3 = &y;      //pointer constant - it can not change its value
    // *ptr3 = 50;       //data constant - we can not change it using pointer

    z = 100;

    const int a = 60;   //data constant
    // a = 70;  

    return 0;
}