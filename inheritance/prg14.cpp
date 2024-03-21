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

    friend std::ostream& operator<<(std::ostream& out, const Parent& obj) {
        out << obj.x;
        out << "in parent operator<<";
        return out;
    }
};

class Child : public Parent {
    int x = 10;
    public:
    Child() {

    }
    Child(Child& obj) {
        std::cout << "child copy" << std::endl;
    }

    // if we comment this child function, code still works
    // but parents friend function does not get inherited
    // it works as compiler type cast child obj to "Higher Oreder Class" by doing this (const Parent&)obj

    friend std::ostream& operator<<(std::ostream& out, const Child& obj) {
        out << obj.x;
        out << "in child operator<<";
        return out;
    }
};

int main() {

    // if we does not comment child function then call goes to child function, compiler does not typecast into Higher Order Class
    Child obj1;
    std::cout << obj1 << std::endl;

    // but for Parent no type casting happen as there is no Higher order class, so we must write parent function
    Parent obj2;
    std::cout << obj2 << std::endl;

    Parent *obj3 = new Child();
    std::cout << *obj3 << std::endl;    //in parent operator<<

    std::cout << *((Child *)obj3) << std::endl;     //in child operator<<

    return 0;
}