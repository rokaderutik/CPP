// overloading subscript [] and parenthesis ()
// can be done using only member function
// friend and normal function not allowed as here obj does not goes as parameter

#include <iostream>

class Demo {
    int arr[5] = {1, 2, 3, 4, 5};

    public:
    int& operator[](int ind) {
        return arr[ind];
    }

    int operator()(int x, int y) {
        return x+y;
    }

    // not work:error: 'operator[]' must be a member function
    // friend int& operator[](Demo& obj, int ind) {
    //     return obj.arr[ind];
    // }
};

int main() {

    Demo obj;
    std::cout << obj[3] << std::endl;
    obj[3] = 100;                       //data change as reference return
    std::cout << obj[3] << std::endl;

    std::cout << obj(10, 20) << std::endl;

    return 0;
}