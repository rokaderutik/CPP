//static and non-statics
#include <iostream>

class Demo{
    int x = 10;     //instance or non-static

    static int y;  //static or class variable
    // static int z = 50;       //can not initialise in class

    public:
    void disp() {
        std::cout << x << std::endl;
        // std::cout << y << std::endl;    //undefined reference to `Demo::y'
    }
};

int main() {

    Demo obj;
    obj.disp();      //error: ld returned 1 exit status

    return 0;
}