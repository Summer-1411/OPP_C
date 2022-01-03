#include <iostream>
#include <string>
using namespace std;
class Time {
	private:
		int hour;
		int minute;
		int second;
	public:
		Time(){
			
		}
		Time(int hour, int minute, int second){
			this->hour = hour;
			this->minute = minute;
			this->second = second;
		}
		void setTime(int hour, int minute, int second){
			this->hour = hour;
			this->minute = minute;
			this->second = second;
		}
		void setHour(int hour){
			this->hour = hour;
		}
		void setMinute(int minute){
			this->minute = minute;
		}
		void setSecond(int second){
			this->second = second;
		}
		int getHour(){
			return hour;
		}
		int getMinute(){
			return minute;
		}
		int getSecond(){
			return second;
		}
		void nextSecond(){
			if(hour == 23 && minute == 59 && second == 59){
				hour = 0;
				minute = 0;
				second = 0;
			}else if(minute == 59 && second == 59){
				hour++;
				minute = 0;
				second = 0;
			}
			else if(second == 59){
				//cout<<"second = "<<second<<endl;
				minute++;
				second = 0;
			}
			else {
				second++;
				//cout<<"Da tang 1 giay"<<endl;
			}
		}
		void previousSecond(){
			if(hour == 0 && minute == 0 && second == 0){
				hour = 23;
				minute = 59;
				second = 59;
			}else if(minute == 0 && second == 0){
				hour--;
				minute = 59;
				second = 59;
			}else if(second == 0){
				minute--;
				second = 59;
			}else {
				second--;
			}
		}
		void display(){
			if(hour < 10){
				cout<<"0";
			}
			cout<<hour<<":";
			if(minute < 10){
				cout<<"0";
			}
			cout<<minute<<":";
			if(second < 10){
				cout<<"0";
			}
			cout<<second<<endl;
		}
		
};
int main(){
//	Time t(23,59,59);
//	t.display();
//	t.nextSecond();
//	t.display();
//	t.setTime(0,0,0);
//	t.display();
//	t.priviousSecond();
//	t.display();
//	t.setTime(3,4,12);
//	t.display();


    Time t(0, 0, 0);
    t.nextSecond();
    t.display();
//	t.display();
//	t.setTime(23, 59, 59);
//	t.display();
//	t.nextSecond();
//	t.display();
//	t.nextSecond();
//	t.display();
//	t.setTime(7, 0, 0);
//	t.display();
//	t.previousSecond();
//	t.display();
}
