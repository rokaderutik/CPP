// friend of 2 classes

#include <iostream>
class Demo2;    //forward declaration
class Demo1 {
    int x = 10;

    protected:
    int y = 20;

    public:
    Demo1() {
        std::cout << "constructor" << std::endl;
    }

    private:
    void getData() {
        std::cout << x << y << std::endl;
    }

    friend void accessData(Demo1& obj1, Demo2& obj2);
};

class Demo2 {
    int x = 10;

    protected:
    int y = 20;

    public:
    Demo2() {
        std::cout << "constructor" << std::endl;
    }
    
    private:
    void getData() {
        std::cout << x << y << std::endl;
    }

    friend void accessData(Demo1& obj1, Demo2& obj2);
};

void accessData(Demo1 &obj1, Demo2 &obj2) {
    obj1.getData();
    std::cout << "--------" << std::endl;
    obj2.getData();
}

int main() {

    Demo1 obj1;
    Demo2 obj2;

    accessData(obj1, obj2);

    return 0;
}