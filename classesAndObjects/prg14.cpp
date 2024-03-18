// static and instance

#include <iostream>

class Demo {
    private:
    int x = 10;
    static int y;

    public:
    void disp() {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }

    // we can not access instance in static member function
    static void info() {
        // std::cout << x << std::endl;    //error: invalid use of member 'Demo::x' in static member function
        // disp(); //error: cannot call member function 'void Demo::disp()' without object

        Demo obj;
        obj.disp();
        std::cout << y << std::endl;
    }
};
int Demo::y = 20;

int main() {

    Demo obj;
    obj.disp();

    obj.info();
    Demo::info();

    return 0;
}