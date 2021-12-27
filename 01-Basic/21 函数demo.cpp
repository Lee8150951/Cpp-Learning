//
// Created by Jacob Lee on 2021/11/28.
//
#include "iostream"
using namespace std;

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int a = 10;
    int b = 20;
    int sum = add(a, b);
    cout << sum << endl;
    return 0;
}