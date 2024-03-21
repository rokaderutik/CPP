// Multiple inheritance
// same methods present in both parents

// for avoiding ambiguity in function call:
// typecast child obj into either (Parent1&)obj or (Parent2&)obj
// or we can use :: resolution operator, obj.Parent1::getData()

#include <iostream>

class Parent1 {
    public:
    void getData() {
        std::cout << "Parent1" << std::endl;
    }
};

class Parent2 {
    public:
    void getData() {
        std::cout << "Parent2" << std::endl;
    }
};

class Child : public Parent1, public Parent2 {
    
};

int main() {

    Child obj1;
    // obj1.getData();  //error: request for member 'getData' is ambiguous

    obj1.Parent1::getData();
    obj1.Parent2::getData();

    ((Parent1 &)obj1).getData();
    ((Parent2 &)obj1).getData();


    return 0;
}