//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "functional"
using namespace std;

int main() {
    // 一元内建函数
    negate<int> n;
    cout << n(50) << endl;

    // 二元内建函数
    plus<int> p;
    cout << p(1, 2) << endl;
}