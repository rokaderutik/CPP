#include <iostream>

class Parent {
    int x = 10;

    protected:
        int y = 20;
    
    public:
        int z = 30;
        void getData() {
            std::cout << x << " " << y << " " << z << std::endl;
        }
};

class Child : Parent {  //private inheritance by default
    public:
        void getInfo() {
            // std::cout << x << std::endl;     //private
            std::cout << y << " " << z << std::endl;
            getData();
        }
};

int main() {

    Child obj1;
    obj1.getInfo();

    // obj1.getData();  //private
    // std::cout << y << " " << z << std::endl;     //private

    return 0;
}