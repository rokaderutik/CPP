// object creation
// on stack and on heap

#include <iostream>


class Player{
    public:
    int jerNo = 7;
    std::string name = "MSD";

    public:
    void info() {
        std::cout << jerNo << std::endl;
        std::cout << name << std::endl;
    }
};

int main() {

    Player obj;     //internal call -- Player(&obj)
    obj.info();     //internal call -- info(&obj)

    Player *obj1 = new Player();        //internal call -- Player(obj)
    obj1->info();                       //internal call --> (*obj).info() --> info(obj)
    (*obj1).info();
    
    return 0;
}