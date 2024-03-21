// Adapter class

#include <iostream>

// interface or abstract class (more properly it is interface)
class IParent {
    public:

    virtual void carrier() = 0;     //pure virtual function
    virtual void marry() = 0;
    virtual void property() = 0;
};

class Child : public IParent {
    public:
    void property() {
        std::cout << "Home, land, farm, assests, money" << std::endl;
    }
    void carrier() {
        std::cout << "Child choice's carriers" << std::endl;
    }
    void marry() {
        std::cout << "Child choice's girl" << std::endl;
    }
};

int main() {

    // IParent obj1;    //error: cannot declare variable 'obj1' to be of abstract type 'IParent'
    // note:   because the following virtual functions are pure within 'IParent':

    IParent *obj = new Child();
    obj->carrier();
    obj->property();
    obj->marry();


    return 0;
}