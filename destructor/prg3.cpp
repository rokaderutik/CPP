// delete and delete array

#include <iostream>

class Demo {
    int *ptr = NULL;
    int *ptrArr = NULL;

    public:
    Demo() {
        std::cout << "constructor" << std::endl;
        ptr = new int;  //memory on heap for int
        
        ptrArr = new int[50];   //memory on heap for int array
    }
    ~Demo() {
        delete ptr; //delete
        // delete ptrArr;   //delete -> it only free pointer of array, does not free array
        delete[] ptrArr;    //delete array

        std::cout << "destructor" << std::endl;
    }
};

int main() {

    Demo obj1;      //destructor called implicitly
    Demo *obj2 = new Demo();    //we have to called its destructor explicitly using delete

    std::cout << "end main" << std::endl;
    delete obj2;

    return 0;
}