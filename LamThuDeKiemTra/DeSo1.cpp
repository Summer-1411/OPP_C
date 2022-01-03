#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Khach {
    private:
        string MaKh;
        string HoTen;
        string DiaChi;
    public:
        void setMakh(string Makh){
            this->MaKh = MaKh;
        }
        string getMaKh(){
            return MaKh;
        }
        void Nhap(){
            fflush(stdin);
            cout<<"Ma khach hang: ";getline(cin,MaKh);
            cout<<"Ho ten: ";getline(cin,HoTen);
            cout<<"Dia chi: ";getline(cin,DiaChi);
        }
        void Xuat(){
            cout<<setw(20)<<MaKh<<setw(20)<<HoTen<<setw(20)<<DiaChi;
        }
};
class KhachBay : public Khach {
    private:
        string MaVe;
        string SoGhe;
        int Gia;
    public:
        void setSoGhe(string SG){
            SoGhe = SG;
        }
        string getSoGhe(){
            return SoGhe;
        }
        int getGiaVe(){
            return Gia;
        }
        void Nhap(){
            Khach::Nhap();
            fflush(stdin);
            cout<<"Ma ve: ";getline(cin,MaVe);
            cout<<"So ghe: ";getline(cin,SoGhe);
            cout<<"Gia: ";cin>>Gia;
        }
        void Xuat(){
            Khach::Xuat();
            cout<<setw(20)<<MaVe<<setw(20)<<SoGhe<<setw(20)<<Gia<<endl;
        }
};

class ChuyenBay {
    private:
        string SoHieu;
        string Ngay;
        string Gio;
        string Tu;
        string Den;
        KhachBay *x;
        int n;
    public:
        void Nhap(){
            cout<<"Nhap so khach: ";cin>>n;
            x = new KhachBay[n];
            fflush(stdin);
            cout<<"So hieu: ";getline(cin,SoHieu);
            cout<<"Ngay: ";getline(cin,Ngay);
            cout<<"Gio: ";getline(cin,Gio);
            cout<<"Tu: ";getline(cin,Tu);
            cout<<"Den: ";getline(cin,Den);
            for(int i = 0; i < n; i++){
                x[i].Nhap();
            }
        }
        void Xuat(){
            cout<<"**************** Thong tin chuyen bay ****************"<<endl;
            cout<<"So hieu: "<<SoHieu<<endl;
            cout<<"Ngay: "<<Ngay<<endl;
            cout<<"Gio: "<<Gio<<endl;
            cout<<"Tu: "<<Tu<<endl;
            cout<<"Den: "<<Den<<endl;
            cout<<"***** Thong tin hanh khach *****"<<endl;
            cout<<setw(20)<<"Ma Kh"<<setw(20)<<"Ho ten"<<setw(20)<<"Dia chi"<<setw(20)<<"Ma ve"<<setw(20)<<"So ghe"<<setw(20)<<"Gia"<<endl;
            for(int i = 0; i < n; i++){
                x[i].Xuat();
            }
        }
        void setting(){
            for(int i = 0; i < n; i++){
                if(x[i].getMaKh() == "KH005"){
                    x[i].setSoGhe("M6");
                }
            }
        }
        void VeGiam(){
            for(int i = 0; i < n-1; i++){
                for(int j = i + 1; j < n; j++){
                    if(x[i].getGiaVe() < x[j].getGiaVe()){
                        swap(x[i], x[j]);
                    }
                }
            }
            cout<<"\nDanh sach khach bay sau khi thay doi : "<<endl;
            cout<<setw(20)<<"Ma Kh"<<setw(20)<<"Ho ten"<<setw(20)<<"Dia chi"<<setw(20)<<"Ma ve"<<setw(20)<<"So ghe"<<setw(20)<<"Gia"<<endl;
            for(int i = 0; i < n; i++){
                x[i].Xuat();
            }
        }
        void countSG(){
            int dem = 0;
            for(int i = 0; i < n; i++){
                if(x[i].getSoGhe() == "M8" || x[i].getSoGhe() == "G8"){
                    dem++;
                }
            }
            if(dem == 0){
                cout<<"\nKhong co khach nafo mua ve co so ghe M8 hoac G8"<<endl;
            }else {
                cout<<"\nCo "<<dem<<" khach mua ve co so ghe M8 hoac G8"<<endl;
            }
        }
};
int main(){
    ChuyenBay a;
    a.Nhap();
    a.Xuat();
    a.setting();
    a.VeGiam();
    a.countSG();
    return 0;
}
