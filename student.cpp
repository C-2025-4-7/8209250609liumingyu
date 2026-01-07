#include <iostream>
#include"student.h"
void Student::display() {
	std::cout << "num: " << num << std::endl;
	std::cout << "name: " << name << std::endl;
	std::cout << "sex" << sex << std::endl;
}
void Student::set_value(int n,const char* mn,char s) {
	num = n;
	strcpy_s(name,sizeof(name), mn);
	sex = s;
}
