#include<iostream>

using namespace std;

class Person {
private:
	string name;
	int dob;
public:
	Person(string name, int dob) {
		this->name = name;
		this->dob = dob;
	}
	void setName(string name){
		this->name = name;
	}
	void setDob(int dob){
		this->dob = dob;
	}
	string getName(){
		return name;
	}
	int getDob(){
		return dob;
	}
};

class Student : public Person {
	private:
	    float gpa;
	public:
        Student(string name, int dob, float gpa) : Person(name,dob){
			this->gpa = gpa;
		}
		void setGpa(float gpa){
			this->gpa = gpa;
		}
		float getGpa(){
			return gpa;
		}
};

int main() {
	Student s("Thao Bap", 2002, 9.8);
	s.setName("Nana");
	cout << "Name: " << s.getName() << endl;
	cout << "Date of birth: " << s.getDob() << endl;
	cout << "GPA: " << s.getGpa() << endl;
	return 0;
}
