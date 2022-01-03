#include "Person.cpp"
#include "Employee.cpp"
#include "Customer.cpp"
#include <iostream>
using namespace std;
int main(){
    Person *person1 = new Employee("Thao Bap", "Hung Yen", 10000);
    Person *person2 = new Customer("Summer", "Thai Nguyen", 9999);
    person1->display();
    person2->display();
    return 0;
}