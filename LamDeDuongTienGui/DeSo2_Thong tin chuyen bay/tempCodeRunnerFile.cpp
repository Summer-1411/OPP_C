#include <iostream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
class NguoiLap {
private:
    string maNL;
    string hoTen;
    string caTruc;
public:
    void Nhap(){
        fflush(stdin);
        cout<<"Nguoi lap: ";getline(cin,maNL);
        cout<<"Ho ten: ";getline(cin,hoTen);
        cout<<"Ca turc: "; getline(cin,caTruc);
    }
    void Xuat(){
        cout<<"Nguoi lap: "<<maNL<<setw(20)<<"Ho ten: "<<hoTen<<setw(20)<<"Ca turc: "<<caTruc<<endl;
    }
};
class ChuyenBay {
private:
    string maCB;
    string tu;
    string time;
public:
    void Nhap(){
        fflush(stdin);
        cout<<"Ma chuyen bay: "; getline(cin,maCB);
        cout<<"Khoi hanh tu: "; getline(cin,tu);
        cout<<"Toi luc: "; getline(cin,time);
    }
    void Xuat(){
        cout<<"Ma chuyen bay: "<<maCB<<setw(20)<<"Khoi hanh tu: "<<tu<<setw(20)<<"Toi luc: "<<time<<endl;
    }
};
class Khach {
private: 
    string makh;
    string hoten;
    string ppost;
    int thu;
public:
	
    void Nhap(){
        fflush(stdin);
        cout<<"Ma hanh khach: ";getline(cin,makh);
        cout<<"Ho ten: "; getline(cin,hoten);
        cout<<"Passpost: "; getline(cin, ppost);
        cout<<"Thu: "; cin>>thu;
    }
    void Xuat(){
        cout<<setw(20)<<makh<<setw(20)<<hoten<<setw(20)<<ppost<<setw(20)<<thu<<endl;
    }
    friend class Phieu;
    friend void SUA(Phieu k);
    
};
class Phieu {
private:
    string maphieu;
    string ngaylap;
    NguoiLap x;
    ChuyenBay y;
    Khach *a;
    int n;
public:
	void Nhap();
    void Xuat();
    int SUM();
    friend void SUA(Phieu k);
};
void Phieu::Nhap(){
    fflush(stdin);
    cout<<"Ma phieu: "; getline(cin, maphieu);
    cout<<"Ngay lap: "; getline(cin, ngaylap);
    x.Nhap();
    y.Nhap();
    cout<<"Nhap so khach: ";cin>>n;
    a = new Khach[n];
    for(int i = 0; i < n; i++){
        a[i].Nhap();
    }
}
void Phieu::Xuat(){
    cout<<"CHARLES DE GAULLE"<<endl;
    cout<<"\t\t\t THONG TIN CHUYEN BAY"<<endl;
    cout<<"Ma phieu: "<<maphieu<<"\t\t\t"<<"Ngay lap: "<<ngaylap<<endl;
    x.Xuat();
    y.Xuat();
    cout<<setw(20)<<"Ma hanh khach"<<setw(20)<<"Ho ten"<<setw(20)<<"Passpost"<<setw(20)<<"Thu"<<endl;
    for(int i = 0; i < n; i++){
        a[i].Xuat();
    }
    cout<<"\t\t\t\tTong tien thu: "<<SUM()<<endl;
    cout<<"TRUONG PHONG KD\t\t\t\tTHU NGAN"<<endl;
}
int Phieu::SUM(){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i].thu;
        }
        return sum;
    }
    
void SUA(Phieu k){
   cout<<k.a[0].thu;
}
// void Sua(Phieu k){
//     for(int i = 0; i < k.n; i++){
//         if(k.a[i].makh == "K005"){
//             k.a[i].hoten = "Le Thi Hai";
//         }
//     }
// };
// void SapXep(Phieu k){
//     for(int i = 0; i < k.n -1; i++){
//         for(int j = i + 1; j < k.n ; j++){
//             if(k.a[i].thu < k.a[i].thu){
//                 swap(k.a[i], k.a[j]);
//             }
//         }
//     }
// };
// void Check(Phieu k){
//    int max = k.a[0].thu;
//    for(int i = 1; i < k.n; i++){
//        if(k.a[i].thu > max){
//            max = k.a[i].thu;
//        }
//    }
//    cout<<"Ho ten khach hang co so tien thu lon nhat : ";
//    for(int i = 0; i < k.n; i++){
//        if(k.a[i].thu == max){
//            cout<< k.a[i].hoten;
//        }
//    }
// };
int main(){
    Phieu k;
    k.Nhap();
    cout<<"Phieu vua nhap :\n"<<endl;
    k.Xuat();
    SUA(k);
    // Sua(k);
    // cout<<"Phieu sau khi sua thong tin:\t"<<endl;
    // k.Xuat();
    // SapXep(k);
    // cout<<"Phieu sau khi sap xep : \t"<<endl;
    // Check(k);
    return 0;

}
