#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const double apple_price = 0.8; // 每个苹果的价格
    int current_num = 2;            // 第一天购买的苹果数
    double total_cost = 0;          // 总花费
    int days = 0;                   // 购买天数

    // 循环：每天购买的苹果数不超过100时，继续购买
    while (current_num <= 100) {
        total_cost += current_num * apple_price; // 累加当天花费
        days++;                                  // 天数+1
        current_num *= 2;                        // 下一天购买数是当天的2倍
    }

    // 计算日均花费
    double average_cost = total_cost / days;

    // 输出结果
    cout << "总花费：" << fixed << setprecision(1) << total_cost << "元" << endl;
    cout << "购买天数：" << days << "天" << endl;
    cout << "每天平均花费：" << fixed << setprecision(1) << average_cost << "元" << endl;

    return 0;
}