// object creation

#include <iostream>


class Player{
    int jerNo;
    std::string name;

    public:
    void info() {
        std::cout << jerNo << std::endl;
        std::cout << name << std::endl;
    }
};

int main() {

    Player vk;
    vk.info();
    
    return 0;
}