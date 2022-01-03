#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NgayCong {
    private:
        string MaLuot;
        int Ngay;
        int Gio;
        int Phut;
    public:
        void Nhap(){
            fflush(stdin);
            cout<<"Ma Luot: ";getline(cin,MaLuot);
            cout<<"Ngay: ";cin>>Ngay;
            cout<<"Gio: ";cin>>Gio;
            cout<<"Phut: ";cin>>Phut;
        }
        void Xuat(){
            cout<<setw(20)<<MaLuot<<setw(20)<<Ngay<<setw(20)<<Gio<<setw(20)<<Phut<<endl;
        }
        string getMaLuot(){
            return MaLuot;
        }
        void setGio(int Gio){
            this->Gio = Gio;
        }
        int getNgay(){
            return Ngay;
        }
        int getGio(){
            return Gio;
        }
        int getPhut(){
            return Phut;
        }
};
class NhanVien {
    private:
        string MaNV;
        string HoTenNV;
    public:
        void Nhap(){
            fflush(stdin);
            cout<<"Ma nhan vien: "; getline(cin, MaNV);
            cout<<"Ho ten nhan vien: ";getline(cin,HoTenNV);
        }
        void Xuat(){
            cout<<"Ma nhan vien: "<<MaNV<<setw(20)<<"Ho ten nhan vien: "<<HoTenNV<<endl;
        }

};
class NguoiLap {
    private:
        string NguoiLap;
        string HoTen;
    public:
        void Nhap(){
            fflush(stdin);
            cout<<"Nguoi Lap: "; getline(cin, NguoiLap);
            cout<<"Ho ten: ";getline(cin,HoTen);
        }
        void Xuat(){
            cout<<"Nguoi Lap: "<<NguoiLap<<setw(20)<<"Ho ten: "<<HoTen<<endl;
        }
};
class Phieu {
    private:
        string MaPhieu;
        string NgayLap;
        NguoiLap x;
        NhanVien y;
        int n;
        NgayCong *a;
    public:
        ~Phieu(){
            delete [] a;
        }
        void Nhap(){
            do {
                cout<<"Nhap so ngay cong : ";cin>>n;
            }while(n < 0);
            a = new NgayCong[n];
            fflush(stdin);
            cout<<"Ma Phieu: ";getline(cin,MaPhieu);
            cout<<"Ngay lap: ";getline(cin,NgayLap);
            x.Nhap();
            y.Nhap();
            for(int i = 0; i < n; i++){
                a[i].Nhap();
            }
        }
        void Xuat(){
            cout<<"\nDIEN LANH FUCO"<<endl;
            cout<<"\n";
            cout<<setw(20)<<"\t\t\t\tBANG CHAM CONG THANG 11"<<endl;
            cout<<"Ma Phieu: "<<MaPhieu<<setw(20)<<"Ngay lap: "<<NgayLap<<endl;
            x.Xuat();
            y.Xuat();
            cout<<"\n";
            cout<<setw(20)<<"Ma Luot"<<setw(20)<<"Ngay"<<setw(20)<<"Gio"<<setw(20)<<"Phut"<<endl;
            for(int i = 0; i < n; i++){
                a[i].Xuat();
            }
            cout<<"\t\t\tTong so ngay cong: "<<n<<setw(20)<<"So ngay di tre: "<<Dem()<<endl;
            cout<<"\tTRUONG PHONG KINH DOANH"<<setw(25)<<"NGUOI LAP"<<endl;
        }
        int Dem(){
            int dem = 0;
            for(int i = 0; i < n; i++){
                if(a[i].getGio() > 7 || a[i].getGio() == 7 && a[i].getPhut() > 0){
                    dem++;
                }
            }
            return dem;
        }
        void setting(){
            for(int i = 0; i < n; i++){
               if(a[i].getMaLuot() == "K002"){
                   a[i].setGio(8);
               }
            }
            cout<<"Sau khi sua gio: "<<endl;
            this->Xuat();
        }
        void SapXep(){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(a[i].getNgay() < a[j].getNgay()){
                        swap(a[i],a[j]);
                    }
                }
            }
            cout<<"Sau khi sap xep: "<<endl;
            this->Xuat();
        }
        void Check(){
            if(n == 15){
                cout<<"Nhan vien co di lam"<<endl;
            }else{
                cout<<"Nhan vien ngay 15 khong di lam !"<<endl;
            }
        }
};
int main(){
    Phieu X;
    X.Nhap();
    X.Xuat();
    X.setting();
    X.SapXep();
    X.Check(); 
    return 0;
}