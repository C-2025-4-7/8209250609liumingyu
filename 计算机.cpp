#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	char(op);
	cout << "请输入运算式（格式：数字 运算符 数字）" << endl;
	cin >> num1 >>op>> num2;
	switch(op){
	case ('+'):
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		break;
	case ('-'):
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	case ('*'):
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	case ('/'):
		if (num2 == 0){
			cout << "除数为零" << endl;
		}
		else
			cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
	case('%'):
		if (num2 == 0) {
			cout << "除数为零" << endl;
		}
		else
			cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;
	default:
		cout << "非法运算符" << endl;


	
	}
	return 0;

}