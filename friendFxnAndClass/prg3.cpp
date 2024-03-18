// friend class

#include <iostream>

class Two;
class One {
    int x = 10;

    protected:
    int y = 20;

    public:
    One() {
        std::cout << "constructor" << std::endl;
    }

    private:
    void setData(int x, int y) {
        this->x = x;
        this->y = y;
    }

    friend class Two;
};

class Two {
    public:
    Two() {
        std::cout << "constructor" << std::endl;
    }

    private:
    void getData(const One &obj) {
        std::cout << obj.x << "---" << obj.y << std::endl;
    }

    public:
    void accessData(One &obj, int x, int y) {
        std::cout << obj.x << "---" << obj.y << std::endl;

        std::cout << "--------" << std::endl;
        obj.setData(x, y);  //friend class private member function, changing data of friend class
        
        getData(obj);   //same class private member function
    }
};

int main() {

    One obj1;
    Two obj2;

    obj2.accessData(obj1, 100, 200);

    return 0;
}