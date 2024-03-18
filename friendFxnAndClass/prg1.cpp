// friend function can access all data of class including variables and member functions
//  irrespective of access specifiers private, protected, public.
// Friend function declaration does not affected by access specifiers, as it is not member function of class.
// it can be friend of more than one class
// if we does not pass constant reference to friend function then it can modify data also.


#include <iostream>

class Demo {
    int x = 10;

    protected:
    int y = 20;

    public:
    Demo() {
        std::cout << "constructor" << std::endl;
    }
    void getData() {
        std::cout << x << y << std::endl;
    }

    friend void accessData(const Demo& obj);
};

void accessData(const Demo &obj) {
    std::cout << obj.x << " " << obj.y << std::endl;
}

int main() {

    Demo obj;
    obj.getData();

    std::cout << "--------" << std::endl;

    accessData(obj);

    return 0;
}