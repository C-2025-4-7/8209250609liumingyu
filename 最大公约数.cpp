#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "请输入两个正整数：" << endl;
    cin >> a >> b;

    // 保存原始值（用于计算最小公倍数）
    int originalA = a, originalB = b;

    // 欧几里得算法求最大公约数
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    int lcm = originalA * originalB / gcd; // 最小公倍数公式

    cout << "最大公约数：" << gcd << endl;
    cout << "最小公倍数：" << lcm << endl;
    return 0;
}