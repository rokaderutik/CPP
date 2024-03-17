#include <iostream>

class Player {
    int jerNo = 18;
    std::string name = "Virat";

    void disp() {
        std::cout << jerNo << ": " << name << std::endl;
    }

    public:
        void printData() {
            std::cout << jerNo << ": " << name << std::endl;
        }
};

int main() {

    Player obj;
    // obj.disp();  //void Player::disp()' is private within this context

    obj.printData();    //correct




    return 0;
}