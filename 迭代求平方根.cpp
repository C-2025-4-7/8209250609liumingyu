#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a;
    cout << "请输入a的值：" << endl;
    cin >> a;

    if (a < 0) {
        cout << "错误：负数没有实数平方根" << endl;
        return 0;
    }

    double x_prev = a; 
    double x_next;
    const double eps = 1e-5; 

    do {
        x_next = 0.5 * (x_prev + a / x_prev);
       
        if (fabs(x_next - x_prev) < eps) {
            break;
        }
        x_prev = x_next;
    } while (true);

    cout << "a的平方根为：" << x_next << endl;
    return 0;
}