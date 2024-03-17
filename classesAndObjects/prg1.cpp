/// cpp structure

/// cpp structure plus point over c structure
// can initialise data in structure
// can have function
// do not require struct keyword for obj creation


// different ways of object creation

#include <iostream>

struct player {
    int jerNo = 18;
    std::string name = "Virat";

    void disp() {
        std::cout << jerNo << ": " << name << std::endl;
    }

}obj3{45, "Rohit"};

int main() {

    player obj;
    std::cout << obj.jerNo << std::endl;
    std::cout << obj.name << std::endl;
    obj.disp();

    struct player obj2 = {7, "MSD"};
    obj2.disp();

    obj3.disp();

    player obj4;
    obj4.jerNo = 10;
    obj4.name = "Sachin";

    obj4.disp();

    return 0;
}