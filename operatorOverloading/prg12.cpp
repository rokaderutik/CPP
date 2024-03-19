// main purpose of overloading new operator is sending extra information

#include <iostream>

void* operator new(size_t size, int data) {

    int *ptr = (int *)malloc(size);
    
    *ptr = data;
    return ptr;
}

void* operator new(size_t size) {

    void *ptr = malloc(size);
    return ptr;
}

int main() {

    int *ptr1 = new int;    //allocate memory
    *ptr1 = 100;            //assign value at memory

    int *ptr2 = new(50) int;    //allocate memory and assign value using new

    std::cout << *ptr1 << "----" << *ptr2 << std::endl;

    return 0;
}