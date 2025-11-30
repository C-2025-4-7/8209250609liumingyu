#include <iostream>
using namespace std;
int main() {
	int letter = 0, space = 0, number = 0, other = 0;
	char c;
	cout << "请输入一行字符" << endl;
	while ((c=getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letter++;
		}
		else if (c == ' ') {
			space++;

		}
		else if (c >= '0' && c <= '9') {
			number++;
		}
		else {
			other++;
		}
	}
	cout << "字母数" << letter << endl;
	cout << "数字数" << number << endl;
	cout << "空格数" << space << endl;
	cout << "其他" << other << endl;
	return 0;
}
