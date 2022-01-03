#include "Employee.cpp"
#include <iostream>
#include <string>
using namespace std;
class FullTimeEmployee : public Employee{
    public:
        FullTimeEmployee(string name, int paymentPerHour) : Employee(name, paymentPerHour){
            
        }
        double calculateSalary(){
            return 8*getPaymentPerHour();
        }
};