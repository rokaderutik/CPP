// friend function does not come through inheritance, as it is not part of class
// copy constructor call scenario
// friend function scenario

#include <iostream>

class Parent {
    int x = 10;
    public:
    Parent() {

    }
    Parent(Parent& obj) {
        std::cout << "parent copy" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const Parent obj) {
        out << obj.x;
        out << "in parent operator<<";
        return out;
    }
};

class Child {
    int x = 10;
    public:
    Child() {

    }
    Child(Child& obj) {
        std::cout << "child copy" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const Child obj) {
        out << obj.x;
        out << "in child operator<<";
        return out;
    }
};

int main() {

    Child obj1;
    std::cout << obj1 << std::endl;

    return 0;
}