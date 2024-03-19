// overload new operator

#include <iostream>

class Demo {
    int x;
    public:
    Demo(int x) {
        this->x = x;
    }

    void* operator new(size_t size) {

        // void* ptr = ::operator new(size);    //call to global predefined function, below 2 lines does same as this global function
        
        void* ptr = malloc(size);
        return ptr;
    }

    // we have no any need of overload new operator, as it is given by predefined library, 
    // but we can pass any extra information to new operator by overloading it, that's why we overload it
    void* operator new(size_t size, std::string s) {

        // void* ptr = ::operator new(size);    //call to global predefined function, below 2 lines does same as this global function
        std::cout << s << std::endl;
        void* ptr = malloc(size);
        return ptr;
    }
};

int main() {

    // new must have 1st parameter as size
    Demo *obj = new("Extra Info") Demo(50);
    // internally -> new(sizeof(Demo), "Extra info") -> returns memory address allocated on heap -> Demo(address, 50) constructor call

    Demo *obj1 = new Demo(100);
    // internally -> new(sizeof(Demo)) -> returns memory address allocated on heap -> Demo(address, 50) constructor call


    return 0;
}