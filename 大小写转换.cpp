#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "请输入一个字符" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		ch -= 32;
		cout << "转换过的大写字符" << ch << endl;

	}
	else {
		int next_ascii = ch + 1;
		cout << "该字符的后继ASCII值为:" << next_ascii << endl;

	}
	return 0;
}