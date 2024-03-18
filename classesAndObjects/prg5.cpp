// object creation and more

#include <iostream>

class Company {
    int countEmp = 1000;
    std::string name = "RRIL";

    public:
    Company() {
        std::cout << "In Company Constructor" << std::endl;
    }

    void compInfo() {
        std::cout << countEmp << std::endl;
        std::cout << name << std::endl;
    }
};

class Employee {
    int empId =  10;
    float empSal = 95.5f;

    public:
    Employee() {
        std::cout << "In Employee Constructor" << std::endl;
    }

    void empInfo() {
        Company obj;    //nested object creation -- created in empInfo() stack

        std::cout << empId << std::endl;
        std::cout << empSal << std::endl;

        obj.compInfo();

        // private within this context
        // std::cout << obj.countEmp << std::endl;
        // std::cout << obj.name << std::endl;
    }
};

int main() {

    Employee *emp = new Employee();
    emp->empInfo();

    return 0;
}