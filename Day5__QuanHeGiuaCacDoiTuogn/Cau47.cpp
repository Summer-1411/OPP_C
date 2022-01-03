#include <iostream>
#include <string>
using namespace std;
class Customer {
    private:
        int id;
        string name;
        int discount;
    public:
        Customer(){

        }
        Customer(int id, string name, int discount){
            this->id = id;
            this->name = name;
            this->discount = discount;
        }
        void setId(int id){
            this->id = id;
        }
        void setName(string name){
            this->name = name;
        }
        void setDiscount(int discount){
            this->discount = discount;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        int getDiscount(){
            return discount;
        }
};

class Invoice {
    private:
        int id;
        Customer customer;
        float amount;
    public:
        Invoice(){

        }
        Invoice(int id, Customer customer, float amount){
            this->id = id;
            this->customer = customer;
            this->amount = amount;
        }
        void setId(int id){
            this->id = id;
        }
        void setCustomer(Customer customer){
            this->customer = customer;
        }
        void setAmount(float amount){
            this->amount = amount;
        }
        int getId(){
            return id;
        }
        Customer getCustomer(){
            return customer;
        }
        float getAmount(){
            return amount;
        }
        string getCustomerName(){
            return customer.getName();
        }
        float getAmountAfterDiscount(){
            return amount*(100-customer.getDiscount())/100;
        }
};
int main(){
    Customer *customers = new Customer[4];
    Customer KhachHang(1, "Thao Bap", 20);
    Invoice HoaDon(2, KhachHang, 100000);
    cout<<"Name customer: "<<HoaDon.getCustomerName()<<endl;
    cout<<"Inoice after discount: "<<HoaDon.getAmountAfterDiscount()<<endl;
}