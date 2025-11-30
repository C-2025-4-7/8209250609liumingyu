#include <iostream>
#include <iomanip> // 用于控制输出精度
using namespace std;

int main() {
    double x, y;
    cout << "请输入x的值：" << endl;
    cin >> x;

    // 分段判断计算y
    if (x > 0 && x < 1) {
        y = 3 - 2 * x;
    }
    else if (x >= 1 && x < 5) {
        y = 2.0 / (4 * x) + 1; // 注意用2.0避免整数除法
    }
    else if (x >= 5 && x < 10) {
        y = x * x;
    }
    else {
        cout << "超出范围" << endl;
        return 0;
    }

    // 保留2位小数输出结果
    cout << "y的值为：" << fixed << setprecision(2) << y << endl;
    return 0;
}