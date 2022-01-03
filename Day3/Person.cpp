#include <iostream>
#include <string>
using namespace std;
class Person {
    private:
        string name;
        int age;
        string address;
    public:
        Person(){
        }
        Person(string name, int age, string address){
            this->name = name;
            this->age = age;
            this->address = address;
        }
        void setName(string name){
            this->name = name;
        }
        void setAge(int age){
            this->age = age;
        }
        void setAddress(string address){
            this->address = address;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getAddress(){
            return address;
        }
};
class Student : public Person {
    private:
        float gpa;
    public:
        Student():Person(){
            
        }
        Student(string name, int age, string address) : Person(name,age,address){

        }
        void setGpa(int gpa){
            this->gpa = gpa;
        }
        float getGpa(){
            return gpa;
        }
};
int main(){
    Student s;
    s.setName("Thao Bap");
    s.setAge(19);
    s.setAddress("Hung Yen");
    s.setGpa(10);
    cout<<"Name: "<<s.getName()<<endl;
    cout<<"Age: "<<s.getAge()<<endl;
    cout<<"Address: "<<s.getAddress()<<endl;
    cout<<"GPA: "<<s.getGpa()<<endl;
}