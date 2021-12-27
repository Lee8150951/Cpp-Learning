//
// Created by Jacob Lee on 2021/11/29.
//
#include "iostream"
using namespace std;

int main() {
    // const修饰指针
    int a = 10;
    int b = 10;
    const int * p_1;
    // *p_1 = 20;
    p_1 = &b;

    // const修饰变量
    int * const p_2 = &a;
    // p_2 = &b;
    *p_2 = 20;
    return 0;
}