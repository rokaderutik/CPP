// check data type of variables
// there is no typeof function in cpp
#include <iostream>
#include <typeinfo>

int main() {

    int x = 100;
    double y = double(x);
    float z = (float)x;

    std::cout << typeid(x).name() << std::endl;
    std::cout << typeid(y).name() << std::endl;
    std::cout << typeid(z).name() << std::endl;

    return 0;
}