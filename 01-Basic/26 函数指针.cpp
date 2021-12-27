//
// Created by Jacob Lee on 2021/11/30.
//
#include "iostream"
using namespace std;

// 普通参数函数，不改变实参
void swap_01(int p1, int p2) {
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
// 指针参数函数，改变实参
void swap_02(int * p1, int * p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a = 10;
    int b = 20;
    // 普通函数
    swap_01(a, b);
    cout << a << endl;
    cout << b << endl;
    // 指针参数函数
    swap_02(&a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}