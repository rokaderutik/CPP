// insertion operator << overloading using normal function

#include <iostream>

class Demo {
    int x = 10;
    public:
    int getData() {
        return x;
    }
};

std::ostream& operator<<(std::ostream &cout, Demo &obj) {
    cout << obj.getData();
    return cout;
}

int main() {

    Demo obj;

    std::cout << obj << std::endl;

    return 0;
}