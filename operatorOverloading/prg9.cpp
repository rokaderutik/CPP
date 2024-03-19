// overload relational operator

#include <iostream>

class Demo {
    int x;

    public:
    Demo(int x) {
        this->x = x;
    }

    int getData() const{
        return x;
    }

    bool operator<(const Demo&);
    int operator>(Demo&);

    friend int operator<=(Demo&, Demo&);
    friend bool operator>=(const Demo&, const Demo&);
};

// member functions defination
bool Demo::operator<(const Demo &obj2) {
    return this->x < obj2.x;
}

int Demo::operator>(Demo &obj2) {
    return this->x > obj2.x;
}

// friend functions definations
int operator<=(Demo& obj1, Demo& obj2) {
    return obj1.x <= obj2.x;
}

bool operator>=(const Demo& obj1, const Demo& obj2) {
    return obj1.x >= obj2.x;
}

// normal functions defination
bool operator==(const Demo& obj1, const Demo& obj2) {
    return obj1.getData() == obj2.getData();
}

int operator!=(const Demo &obj1, const Demo &obj2) {
    return obj1.getData() != obj2.getData();
}

int main() {

    Demo obj1(10);
    Demo obj2(20);

    std::cout << (obj1 < obj2) << std::endl;
    std::cout << "--------" << std::endl;
    std::cout << (obj1 > obj2) << std::endl;
    std::cout << "--------" << std::endl;
    std::cout << (obj1 <= obj2) << std::endl;
    std::cout << "--------" << std::endl;
    std::cout << (obj1 >= obj2) << std::endl;
    std::cout << "--------" << std::endl;
    std::cout << (obj1 == obj2) << std::endl;
    std::cout << "--------" << std::endl;
    std::cout << (obj1 != obj2) << std::endl;

    return 0;
}