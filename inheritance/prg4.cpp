// constructor-destructor calling sequence
// new and delete operator overloaded

#include <iostream>

class Parent {

    public:
    Parent() {
        std::cout << "In parent constructor" << std::endl;
    }
    ~Parent() {
        std::cout << "In parent destructor" << std::endl;
    }
};

class Child : public Parent {
    public:
    Child() {
        std::cout << "In child constructor" << std::endl;
    }
    ~Child() {
        std::cout << "In child destructor" << std::endl;
    }
    friend void* operator new(size_t size) {
        std::cout << "In new" << std::endl;
        void* ptr = malloc(size);
        return ptr;
    }

    void operator delete(void* ptr) {
        std::cout << "In delete" << std::endl;
        free(ptr);
    }
};

int main() {

    Child *obj2 = new Child();

    delete obj2;

    return 0;
}