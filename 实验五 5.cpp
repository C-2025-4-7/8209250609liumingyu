#include<iostream>
using namespace std;
class point {
	private:
		int x=60, y=80;
public:
	void setpoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "x=" << x << ", y=" << y << endl;
	}
};
int main() {
	point p;
	p.display();
	p.setpoint(10, 20);
	p.display();
	return 0;
}