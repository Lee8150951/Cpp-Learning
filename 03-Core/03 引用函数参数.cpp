//
// Created by Jacob Lee on 2021/12/16.
//
#include "iostream"
using namespace std;

void quote_swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    quote_swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}