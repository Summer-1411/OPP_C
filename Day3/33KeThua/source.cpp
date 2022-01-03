#include "Person.cpp"
#include "Student.cpp"
#include "Teacher.cpp"
#include <iostream>
using namespace std;
int main(){
    Student sv("Thao Bap", 19, "Hung Yen", 10);
    sv.display();
    sv.setName("Thao");
    sv.setAddress("Thai Nguyen");
    sv.display();

    Teacher gv("Son Dang", 29, "Ha Noi", 1000);
    gv.display();
    gv.setName("Dang Ngoc Son");
    gv.setAge(18);
    gv.setSalary(90000);
    gv.display();
    return 0;
}