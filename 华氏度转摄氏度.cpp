#include <iostream>
#include <iomanip>
using namespace std;
double F;
double C;
int main() 
{
	cout << "请输入华氏度（整数）" << endl;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "这是同等温度的摄氏度"<< fixed<<setprecision(2)<< C << endl;
	return 0;

}