#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Author {
    private:
        string name;
        string email;
    public:
        Author(){

        }
        Author(string name, string email){
            this->name = name;
            this->email = email;
        }
        void setName(string name){
            this->name = name;
        }
        void setEmail(string email){
            this->email = email;
        }
        string getName(){
            return name;
        }
        string getEmail(){
            return email;
        }
        void display(){
            cout<<"Name author: "<<name<<endl;
            cout<<"Email author:"<<email<<endl;
        }
};

class Book {
    private:
        string name;
        Author author;
        float price;
    public:
        Book(){

        }
        Book(string name, Author author, float price){
            this->name = name;
            this->author = author;
            this->price = price;
        }
        void setName(string name){
            this->name = name;
        }
        void setAuthor(Author author){
            this->author = author;
        }
        void setPrice(float price){
            this->price = price;
        }
        string getName(){
            return name;
        }
        float getPrice(){
            return price;
        }
        Author getAuthor(){
            return author;
        }
        // string getAuthorNames(){
        //     string authorNames = "";
        //     for(int i = 0; i < authors.size() - 1; i++){
        //         authorNames += authors[i].getName() + ", ";
        //     }
        //     authorNames += authors[authors.size()-1].getName();
        //     return authorNames;
        // }

};
int main(){
    // vector<Author> tacgia;
    // tacgia.push_back(Author("Thao Bap", "thaobap12102002@gmail.com"));
    // tacgia.push_back(Author("Bae", "bae@gmail.com"));
    // tacgia.push_back(Author("Summer", "luvchang@gmail.com"));
    // Book *sach = new Book("OOP C++", tacgia, 3000);
    // cout<<"Tac gia: "<<sach->getAuthorNames();
    Author tacgia("Thao Bap", "thapbap1210@gmai.com");
    Book *sach = new Book("Hoc lap trinh C++", tacgia, 1200);
    cout<<"Ten sach: "<<sach->getName()<<endl;
    sach->getAuthor().display();
    cout<<"Gia: "<<sach->getPrice()<<endl;
}