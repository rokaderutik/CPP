// overloading i/o operator
// i/o operators can not be overloaded using member function, as in that case 1st parameter requires hidden this,
// and in case of i/o 1st parameter is cout or cin
// can be overloaded using friend and normal function

#include <iostream>

class Demo {
    int x = 10;
    
    // we can body to friend function in class also, but not good practice
    // we does not allowed to make (const std::ostrem &cout) as it is already defined const in there predefind libraray
    // and we are not have access to change library predefined things.

    friend std::ostream& operator<<(std::ostream &cout, const Demo &obj) {
        cout << obj.x;      //internally -> operator<<(std::ostream &cout, int x)
        return cout;
    }
};

int main() {

    Demo obj;

    std::cout << obj << std::endl;  //operator<<(cout, obj)

    // insertion operator -> <<

    return 0;
}