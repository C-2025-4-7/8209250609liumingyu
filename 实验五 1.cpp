#include<iostream>
using namespace std;
class Time 
{
private:
	int hour;
	int minute;
	int sec;
public:
	void imput(){
		cin >> hour >> minute >> sec;
	};
	void output() {
		cout << hour << ":" << minute << ":" <<sec << endl;
	};
};
int main() {
	Time t1;
	t1.imput();
	t1.output();
	return 0;
}