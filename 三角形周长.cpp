#include <iostream>
using namespace std;
int a, b, c,C;
int main() {
	cout << "请输入三边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		C = a + b + c;
		cout << "三角形的周长为："<< C << endl;
		if (a == b || b == c || a == c) {
			cout << "三角形为等腰三角形" << endl;
		}
	}
	else 
		cout << "三角形无法成立" << endl;
	
	return 0;
}