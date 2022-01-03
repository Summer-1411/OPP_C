#include <iostream>
#include <cmath>
using namespace std;
/*Biến tĩnh và pp tinh ch? khai b�o duoc o trong public */
class Math {
	private:
		int x,y,z;
	public:
		static int id;
		static int max(int a, int b){
			return a > b ? a : b;
		};
		static int min(int a, int b){
			return a < b ? a : b;
		};

		/* Nạp chồng : nếu một lớp có 1 phương thức cùng tên nhưng khác nhau về kiểu dữ liệu và số tham ssoo thì ta gọi là nạp chồng.
		   Các hàm nạp chồng có thể gọi đên nhau */
		int timMax(int x, int y){
			return x > y ? x : y;
		}
		int timMax(int x, int y, int z){
			return timMax(x,y) > z ? timMax(x,y) : z;
		}
		
};
int Math::id=0;

class ArrayCalculator {
    public :
        static int sumOfArray(int arr[], int n){
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += arr[i];
            }
            return sum;
        }
        static double sumOfArray(double arr[], int n){
            double sum = 0;
            for(int i = 0; i < n; i++){
                sum += arr[i];
            }
            return sum;
        }
};


int main(){
	Math s,h;
	s.id = 5;
	h.id = 8;
	//output = 8 vì cả hai đối tượng s và h đều có biến id là như nhau, s.id = 5 bị ghi đè
	cout<<"s.id = "<<s.id<<endl;
	cout<<"h.id = "<<h.id<<endl;
    cout<<"pow(2,3) = "<< pow(2,3)<<endl;
	// Phương pháp tĩnh có thể sử dụng trực tiếp mà không cần khai báo đối tượng
	// Phương thức tĩnh có thể gọi tới phương thức tĩnh khác, không thể gọi tới phương thức không phải static;
	// Trong cùng một lớp, phương thức tĩnh không thể gọi tới biến không phải static
	cout <<"Max(2,3) = "<<Math::max(2,3)<<endl;
	cout <<"Min(2,3) = "<<Math::min(2,3)<<endl;


	//Nạp chồng: ứng dung tìm max 3 số
	Math MAX;

	cout <<"Max(2,3,5) = "<< MAX.timMax(2,3,5);

}
