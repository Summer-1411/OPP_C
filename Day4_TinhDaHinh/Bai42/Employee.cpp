#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee {
    private:
        string name;
        int paymentPerHour;
    public:
        Employee(string name, int paymentPerHour){
            this->name = name;
            this->paymentPerHour = paymentPerHour;
        }
        void setName(string name){
            this->name = name;
        }
        void setPaymentPerHour(int paymentPerHour){
            this->paymentPerHour = paymentPerHour;
        }
        string getName(){
            return name;
        }
        int getPaymentPerHour(){
            return paymentPerHour;
        }
        virtual double calculateSalary() = 0;
};