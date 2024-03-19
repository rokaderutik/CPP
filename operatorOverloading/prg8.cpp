// overload extraction >> operator

#include <iostream>

class Demo {
    int x;
    int y;

    public:
    void getData() {
        std::cout << x << " " << y << std::endl;
    }

    friend std::istream& operator>>(std::istream&, Demo&);
};

std::istream& operator>>(std::istream& cin, Demo& obj) {    //const Demo& does not work, it gives error for below 2 lines
    cin >> obj.x;                                           //no match for operator>>(std::istream&, const int)
    cin >> obj.y;

    return cin;
}

int main() {

    Demo obj;

    std::cin >> obj;

    obj.getData();

    return 0;
}