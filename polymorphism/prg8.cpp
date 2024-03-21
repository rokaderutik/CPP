// late binding code


#include <iostream>

void add(int x, int y) {
    std::cout << x + y << std::endl;
}

void sub(int x, int y) {
    std::cout << x - y << std::endl;
}

void mult(int x, int y) {
    std::cout << x * y << std::endl;
}

int main() {

    std::cout <<"1. Add\n" << "2. Sub\n" << "3. Mult" << std::endl;
    int choice;
    std::cin >> choice;

    // function pointer
    void (*funPtr)(int, int) = NULL;

    switch(choice) {
        case 1:
            funPtr = add;
            break;
        case 2:
            funPtr = sub;
            break;
        case 3:
            funPtr = mult;
            break;
    }

    funPtr(20, 10);

    return 0;
}
// here there is no any function call, at run time it confirm that to which function should we call, that's why it's late or dynamic binding.
// if we write this code normally without function pointer, then it is early or static binding.