// trying to send data from child constructor to parent constructor, but failed
// one temporary object created

#include <iostream>

class Parent {
    int x = 10;

    protected:
    int y = 20;

    public:
    int z = 30;

    // as in this code compiler gives call to no argument constructor, that's why we write it.
    Parent() {
        std::cout << "In no argument constructor" << std::endl;
    }

    Parent(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
        std::cout << "In parameterised constructor" << std::endl;
    }

    void getData() {
         std::cout << x << " " << y << " " << z << std::endl;
    }
    ~Parent() {
        std::cout << "In parent destructor" << std::endl;
    }

};

class Child : private Parent {
    public:
    Child(int x, int y, int z) {    //1st line here compiler give call to parent no-argument constructor
        Parent(x, y, z);    //new tempory object of parent is created
    }
    void getInfo() {
        getData();
    }
    ~Child() {
        std::cout << "In child destructor" << std::endl;
    }
};

int main() {

    Child obj1(40, 50, 60);
    obj1.getInfo();

    return 0;
}