#include <iostream>

class PackageLess {
    std::string exception;
    public:
        PackageLess(std::string exception) {
            this->exception = exception;
        }
        std::string getException() {
            return exception;
        }
};

class PackageHigh {
    std::string exception;
    public:
        PackageHigh(std::string exception) {
            this->exception = exception;
        }
        std::string getException() {
            return exception;
        }
};

class Demo {
    int id;
    double package;
    public:
        Demo(int id, double package) {
            this->id = id;
            this->package = package;
        }
        double checkPackage() {
            if(package < 5) {
                throw PackageLess("Package less than 5LPA");
            } else if(package > 15) {
                throw PackageHigh("Package higher than 15LPA");
            } else {
                return package;
            }
        }
};

int main() {
    Demo obj1(1, 4.5);
    Demo obj2(2, 6);
    Demo obj3(3, 17.5);
    Demo obj4(4, 10);
    Demo obj5(5, 8.8);

    Demo arr[5] = {obj1, obj2, obj3, obj4, obj5};

    for(int i = 0; i < 5; i++) {
        try{
            std::cout << arr[i].checkPackage() << std::endl;
        } catch(PackageLess& exception) {
            std::cout << "Exception caught: " << exception.getException() << std::endl;
        } catch(PackageHigh& exception) {
            std::cout << "Exception caught: " << exception.getException() << std::endl;
        } 
    }
    
    return 0;
}