#include "Employee.cpp"
#include "PartTimeEmployee.cpp"
#include "FullTimeEmployee.cpp"

int main() {
	Employee *employee1 = new PartTimeEmployee("Thao Bap", 100000, 4);
    cout<<"Name: "<<employee1->getName()<<endl;
    cout<<"Salary per day: "<<employee1->getPaymentPerHour()<<endl;

    cout<<"*******************************"<<endl;
    Employee *person = new FullTimeEmployee("Summer", 100000);
    cout<<"Name: "<<person->getPaymentPerHour()<<endl;
    cout<<"Salary per day: "<<person->getPaymentPerHour()<<endl;
	return 0;
}