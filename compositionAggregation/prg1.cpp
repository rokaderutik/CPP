// composition -> full dependency
// aggregation -> not full dependency

// aggregation example
// it is aggregation, as Employee class is not fully dependent for its existence on Company class.
// Here Employee class obj is created inside Company class and inside main function
// as if there is no company class we can create Employee obj so its not dependent on Company or any other class, that's why
// it is aggregation.

// if Empolyee class obj is only allowed to created inside company class then it is fully dependent on company class for its existence
// in such scenario it is known as composition, in such case Employee class is put in header file and its access is given only to company
// class. 

#include <iostream>

class Employee {
    int empId = 101;
    std::string name = "Rutik";

    public:
    Employee() {
        std::cout << "In Employee Constructor" << std::endl;
    }
    void setData(int empId, std::string name) {
        this->empId = empId;
        this->name = name;
    }
    void getInfo() {
        std::cout << empId << " -- " << name << std::endl;
    }
    ~Employee() {
        std::cout << "In Employee Destructor" << std::endl;
    }
};

class Company {
    int empCnt = 1000;
    std::string name = "RRIL";

    // Employee class obj
    Employee obj;

    public:
    Company(int empCnt, std::string name, int empId, std::string eName) {
        this->empCnt = empCnt;
        this->name = name;
        obj.setData(empId, eName);

        std::cout << "In Company Constructor" << std::endl;
    }
    void getInfo() {
        std::cout << empCnt << " -- " << name << std::endl;
        obj.getInfo();
        this->obj.getInfo();    //same as above line
    }
    ~Company() {
        std::cout << "In Company Destructor" << std::endl;
    }
};

int main() {

    Company obj(10000, "RRIL", 1, "Rutik Rokade");
    obj.getInfo();

    Employee obj1;
    obj1.getInfo();

    return 0;
}
/*
o/p:
In Employee Constructor
In Company Constructor
10000 -- RRIL
1 -- Rutik Rokade
1 -- Rutik Rokade
In Employee Constructor
101 -- Rutik
In Employee Destructor
In Company Destructor
In Employee Destructor
*/