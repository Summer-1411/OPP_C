#include "Employee.cpp"
#include "Manager.cpp"
#include <iostream>
using namespace std;
int main(){
    Employee last("Le Van Tung", 2000);
    last.display();
    cout<<"*************************"<<endl;
    Manager newEmp("Sunflower", 2000,1500);
    newEmp.display();
}