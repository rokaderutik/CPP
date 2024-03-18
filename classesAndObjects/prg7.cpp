// object creation
// public instance variable initialisation ways

#include <iostream>


class Player{
    public:
    int jerNo = 7;      //1st way
    std::string name = "MSD";

    public:
    void info() {
        std::cout << jerNo << std::endl;
        std::cout << name << std::endl;
    }
};

int main() {

    Player vk{18, "Virat"};     //2nd way
    vk.info();

    Player obj;
    obj.info();

    Player obj1;
    obj1.jerNo = 45;        //3rd way
    obj1.name = "Rohit";
    obj1.info();
    
    return 0;
}