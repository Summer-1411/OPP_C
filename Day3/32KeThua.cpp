#include<iostream>

using namespace std;

class Person {
private:
	string name;
	string gender;

public:
	Person(string name, string gender) {
		this->name = name;
		this->gender = gender;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	string getGender() {
		return gender;
	}

	void setGender(string gender) {
		this->gender = gender;
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
	}
};

class Student : Person {
	private:
	    int salary;
	public: 
	    Student(string name, string gender, int salary) : Person(name, gender){
			this->salary = salary;
		}
		void display(){
			Person::display();
			cout<<"Salary: "<<salary<<endl;
		}
};
class Teacher : Person {
	private:
	    int phone;
	public:
	    Teacher(string name, string gender): Person(name,gender){

		}
		void display(){
			Person::display();
		}
};

int main() {
	Student s("Thao Bap", "Female", 1700);
	s.display();
	Teacher y("Thao", "Female");
	y.display();
	return 0;
}