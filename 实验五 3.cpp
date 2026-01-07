#include<iostream>
using namespace std;
class box {
private:
		double length;
		double breadth;
		double height;
public:
	void imput() {
				cout << "Enter length, breadth and height: ";
				cin >> length >> breadth >> height;
	}
	void volume() {
				cout << "Volume of box: " << length * breadth * height << endl;
	}
};
int main() {
		box box1, box2,box3;
		box1.imput();
		box1.volume();
		box2.imput();
		box2.volume();
		box3.imput();
		box3.volume();
		return 0;
}