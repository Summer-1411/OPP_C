//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student{
//	private :
//		string name;
//		int age;
//	public :
//		Student(){
//			//H�m contructor c� t�n tr�ng v?i t�n class
////1			cout<<"Ham khoi tao contructor (tu goi khi lop duoc khoi tao)"<<endl;
//            name = "Le Van Tung";
//            age = 19;
//		}
//		void display(){
//			cout<<"Name: "<<name<<endl;
//			cout<<"Age: "<<age<<endl;
//		}
//		
//};
//int main(){
//	Student s;
//	//1    output : Ham khoi tao contructor (tu goi khi lop duoc khoi tao)
//	s.display();
//	return 0;
//}



//______________Tab_______________
//#include <iostream>
//
//using namespace std;
//
//class Student {
//private:
//    string name;
//public:
//    Student(string name) {
//        cout << "My name is " << name;
//    }
//};
//
//int main() {
//    Student s("Tung");
//    return 0;
//}
//Output: My name is Tung






//________________Tab________________
#include <iostream>
#include <string>
using namespace std;
class Student {
	private :
		string name;
		int age;
	public :
	    int score;
		Student(string name, int age){
			this->name = name;
			this->age = age;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

int main(){
	Student *s = new Student("Summer", 12);
	Student h("Thao Bap",19);
	s->display();
	h.display();
	s->score = 2;
	cout<<"score = "<<s->score;
}
/*output : Name: Le Van Tung
           Age: 19
           Name: Thao Bap
           Age: 19private :
		string name;
		int age;
	public :
		Student(string name, int age){
			this->name = name;
			this->age = age;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
*/
