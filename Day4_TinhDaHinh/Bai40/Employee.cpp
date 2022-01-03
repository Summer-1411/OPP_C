#include "Person.cpp"
#include <iostream>
using namespace std;
class Employee:public Person {
    private:
        int salary;
    public:
        Employee(string name, string address, int salary) : Person(name,address){
            this->salary = salary;
        }
        void setSalary(int salary){
            this->salary = salary;
        }
        int getSalary(){
            return salary;
        }
        void display(){
            cout<<"Employee name: "<<getName()<<endl;
            cout<<"Employee address: "<<getAddress()<<endl;
            cout<<"Employee salary: "<<salary<<endl;
        }
};