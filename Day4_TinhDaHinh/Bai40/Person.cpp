#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person {
    private:
        string name;
        string address;
    public:
        Person(string name, string address){
            this->name = name;
            this->address = address;
        }
        virtual void display() = 0;
        
        void setName(string name){
            this->name = name;
        }
        void setAddress(string address){
            this->address = address;
        }
        string getName(){
            return name;
        }
        string getAddress(){
            return address;
        }
};