#include "Employee.cpp"
#include <iostream>
#include <string>
using namespace std;
class PartTimeEmployee:public Employee {
    private:
        int workingHours;
    public:
        PartTimeEmployee(string name, int paymentPerHour, int workingHours) : Employee(name,paymentPerHour){
            this->workingHours = workingHours;
        }
        double calculateSalary(){
            return getPaymentPerHour() * workingHours;
        }
};
