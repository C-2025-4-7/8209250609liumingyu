#include <iostream>
using namespace std;
int main()
{
	const double PI = 3.14159;
	double v;
	int r;
	int h;
	cout << "ÇëÊäÈëµ×Ãæ°ë¾¶" << endl;
	cin >> r ;
	cout << "ÇëÊäÈë¸ß" << endl;
	cin >> h;
	v =  PI * r * r * h * 1 / 6;
	cout << v;
	return 0;



}