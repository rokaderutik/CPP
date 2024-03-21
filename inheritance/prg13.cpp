// friend function does not come through inheritance, as it is not part of class
// copy constructor call scenario
// friend function scenario

// not inheritance example
// here there is parent child relation in this code
#include <iostream>

class Parent {
    int x = 10;
    public:
    Parent() {

    }
    Parent(Parent& obj) {
        std::cout << "parent copy" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const Parent& obj) {     //reference pass, so no copy constructor call
        out << obj.x;
        out << "in parent operator<<";
        return out;
    }
};
// here there is parent child relation in this code
class Child {
    int x = 10;
    public:
    Child() {

    }
    Child(Child& obj) {
        std::cout << "child copy" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const Child obj) {   //copy constructor call
        out << obj.x;
        out << "in child operator<<";
        return out;
    }
};

int main() {

    // here there is parent child relation in this code
    Child obj1;
    std::cout << obj1 << std::endl;

    Parent obj2;
    std::cout << obj2 << std::endl;

    return 0;
}