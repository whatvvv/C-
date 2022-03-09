#include<iostream>
#include<iomanip>
using namespace std;
class Clock
{
	public:
		Clock (int hour,int min, int sec);
		void showTime();
	private:
		int _hour;
		int _min;
		int _sec;
 };
 Clock::Clock(int hour,int min, int sec)
 {
 	_hour=hour;
 	_min=min;
 	_sec=sec;
 }
 void Clock::showTime() 
 {
 	cout<<setw(2)<<setfill('0')<<_hour<<":"
	 <<setw(2)<<setfill('0')<<_min<<":"
	 <<setw(2)<<setfill('0')<<_sec<<endl; 
 }
 
 int main()
 {
 	Clock clock1(10,20,30);
 	cout<<"clock1:";
 	clock1.showTime();
 	Clock clock2(22,16,12);
 	cout<<"clock2:";
 	clock2.showTime();
 	return 0;
 	
 	
  } 
