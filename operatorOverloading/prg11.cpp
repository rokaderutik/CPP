// overload delete operator

#include <iostream>

class Demo {
    int x;
    public:
    Demo(int x) {
        this->x = x;
    }

    void operator delete(void *ptr) {

        free(ptr);
    }

    // we have no any need of overload delete operator, as it is given by predefined library, 
    // but we can pass any extra information to delete operator by overloading it, that's why we overload it
    void operator delete(void* ptr, std::string s) {

        std::cout << s << std::endl;
        free(ptr);
    }
};

int main() {

    // new must have 1st parameter as size

    Demo *obj1 = new Demo(100);
    Demo *obj2 = new Demo(200);
    // internally -> new(sizeof(Demo)) -> returns memory address allocated on heap -> Demo(address, 50) constructor call

    delete obj1;
    delete obj2; //can not able to find how to pass extra parameter to delete

    return 0;
}