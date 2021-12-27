//
// Created by Jacob Lee on 2021/11/9.
//
#include "iostream"
using namespace std;

int main() {
    // 递增递减运算法
    int a = 1;
    int b_01 = ++a + 1;
    int b_02 = a++ + 1;
    cout << a << endl;
    cout << b_01 << endl;
    cout << a << endl;
    cout << b_02 << endl;
    return 0;
}