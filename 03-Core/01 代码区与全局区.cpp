//
// Created by Jacob Lee on 2021/12/8.
//
#include "iostream"
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;


int main() {
    // 普通变量
    int a = 10;
    int b = 10;
    cout << "局部变量a的地址为:" << &a << endl;
    cout << "局部变量b的地址为:" << &b << endl;
    // 全局变量
    cout << "全局变量a的地址为:" << &g_a << endl;
    cout << "全局变量b的地址为:" << &g_b << endl;
    // 静态变量（在普通变量前家static，属于静态变量）
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量a的地址为:" << &s_a << endl;
    cout << "静态变量b的地址为:" << &s_b << endl;
    return 0;
}