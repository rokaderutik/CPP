// overriding
// virtual
// late binding or dynamic binding


#include <iostream>

class Parent {
    public:
    Parent() {

    }

    virtual void getData() {
        std::cout << "Parent" << std::endl;
    }
};

class Child : public Parent {
    public:
    Child() {

    }

    void getData() {    //implicitly virtual keyword added before void
        std::cout << "Child" << std::endl;
    }
};

int main() {

    Child obj1;
    obj1.getData();

    Parent obj2;
    obj2.getData();

    Parent *obj3 = new Child();
    obj3->getData();
    // here at compile time binding, obj3's binding is done with Parent getData(), and due to virtual keyword compiler knows that
    // there may be latest copy of this function in any child class obj, then at runtime bind it to that latest instance
    // due to virtual the most derived version is called
    

    std::cout << sizeof(Parent) << std::endl;   //8 as vptr added due to virtual
    std::cout << sizeof(Child) << std::endl;    //8 as vptr added due to virtual


    return 0;
}