//
// Created by Jacob Lee on 2021/11/8.
//
#include "iostream"
using namespace std;
// 常量用于记录不可以改变的数据，这些数据一旦发生改变就失去了本身的作用
// 通过#defind定义宏常量
// 通过const修饰变量

// 1、宏常量
#define WEEK 7

int main() {
    // 2、const修饰
    const int month = 30;

    cout << "A week has " << WEEK << " days" << endl;
    cout << "A month has " << month << " days" << endl;
    return 0;
}