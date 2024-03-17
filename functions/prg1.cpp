//macro code

#include <iostream>

#define sum(x, y) x+y
#define z 100

int main() {
    
    int x = 10;
    int y = 20;

    std::cout << sum(x, y) << std::endl;    //std::cout << x+y << std::endl;
    std::cout << z << std::endl;            //std::cout << 100 << std::endl;
    
    return 0;
}

/*
g++ -E prg1.cpp > out.txt
code at preprocessing time
# 8 "prg1.cpp"
int main() {

    int x = 10;
    int y = 20;

    std::cout << x+y << std::endl;
    std::cout << 100 << std::endl;

    return 0;
}
*/