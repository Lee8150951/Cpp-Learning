//
// Created by Jacob Lee on 2021/11/29.
//
#include "iostream"
using namespace std;

int main() {
    int a = 20;
    int * p;
    p = &a;
    cout << p << endl;
    cout << &a << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;

    *p = 1000;
    cout << a << endl;
    cout << *p << endl;
    return 0;
}