// call by value, address, reference

#include <iostream>

// ambiguouity
// void swap(int x, int y) {
//     x = x + y;
//     y = x - y;
//     x = x - y;
// }

void swap(int &ref1, int &ref2) {       //internally -> swap(int *ref1, int *ref2)
    ref1 = ref1 + ref2;
    ref2 = ref1 - ref2;
    ref1 = ref1 - ref2;
}

int& fun() {
    int x = 10;
    return x;   //warning: reference to local variable 'x' returned
}

int main() {

    int x = 10;
    int y = 20;

    std::cout << "x: "<< x << std::endl;
    std::cout << "y: "<< y << std::endl;

    swap(x, y);             //internally -> swap(&x, &y)

    std::cout << "x: "<< x << std::endl;
    std::cout << "y: "<< y << std::endl;

    int ret = fun();
    std::cout << "ret: "<< ret << std::endl;    //garbage or segmentation

    return 0;
}