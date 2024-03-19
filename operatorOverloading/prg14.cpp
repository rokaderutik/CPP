// overload unary operators
// postfix increment
// for compiler to distinguish between prefix and postfix, we have to give one dummy parameter at last of type int
// operator++() -> prefix
// operator++(int dummy) -> postfix

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
    int operator++(int dummy) {
        return x++;
    }

    // friend int operator++(Demo &obj, int dummy) {
    //     return obj.x++;
    // }
};

// normal function
// int operator++(Demo &obj, int dummy) {
//     int val = obj.getData();
//     return val++;
//     // return obj.getData()++;  //not work ->error: lvalue required as increment operand  return obj.getData()++; 
//                                 // as getData() returns value                                                 ^
// }

int main() {

    Demo obj(10);

    std::cout << obj++ << std::endl;

    return 0;
}