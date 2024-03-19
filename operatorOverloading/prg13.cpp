// overload unary operators
// prefix increment

#include <iostream>

class Demo {
    int x;

    public:
    Demo(int x) {
        this->x = x;
    }

    int getData() {
        return x;
    }

    // member function
    // int operator++() {
    //     return ++x;
    // }

    // friend int operator++(Demo &obj) {
    //     return ++obj.x;
    // }
};

// normal function
int operator++(Demo &obj) {
    int val = obj.getData();
    return ++val;
    // return ++obj.getData();  //not work ->error: lvalue required as increment operand  return ++obj.getData(); 
                                // as getData() returns value                                                 ^
}

int main() {

    Demo obj(10);

    std::cout << ++obj << std::endl;

    return 0;
}