#include<iostream>

using namespace std;
//Class Person
class Person {
private:
	int id;
	string name;
	int age;
	string address;
public:
    Person(){

	};
    Person(int id, string name, int age, string address) {
		this->id = id;
		this->name = name;
		this->age = age;
		this->address = address;
	}
    void setId(int id){
		this->id = id;
	}
	int getId(){
		return id;
	}
	void setName(string name){
		this->name = name;
	}
	string getName(){
		return name;
	}
	void setAge(int age){
		this->age = age;
	}
	int getAge(){
		return age;
	}
	void setAddress(string address){
		this->address = address;
	}
	string getAddress(){
		return address;
	}
};
//____________________class Rectangle_____________
class Rectangle {
    private:
        double length;
        double width;
    public:
        Rectangle(){
            
        };
        Rectangle(double length, double width){
            this->length = length;
            this->width = width;
        }
        void setLength(double length){
            this->length = length;
        }
        double getLength(){
            return length;
        }
        void setWidth(double width){
            this->width = width;
        }
        double getWidth(){
            return width;
        }
        double getArea(){
            return length * width;
        }
        double getPerimeter(){
            return (length+width)*2;
        }
};
int main() {

    //ĐỐi tượng p
	Person p;
	p.setId(1001);
	p.setName("Quynh");
	p.setAge(24);
	p.setAddress("Ha Noi");
	cout << "Id: " << p.getId() << endl;
	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() << endl;
	cout << "Address: " << p.getAddress() << endl;
    cout <<"**********************************"<<endl;

    Rectangle r(4, 5);
	cout << "Area: " << r.getArea() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
	r.setLength(2);
	r.setWidth(3);
	cout << "Area: " << r.getArea() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
	return 0;


	return 0;


    
}
