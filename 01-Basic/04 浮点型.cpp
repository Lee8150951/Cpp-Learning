//
// Created by Jacob Lee on 2021/11/9.
//
#include "iostream"
using namespace std;

int main() {
    // 通常情况下在定义float型时，会在小数后面加一个f来明显的示意这是一个float型的数据
    // 如果不这么做的话，通常会认为3.14是一个双精度的数据，然后通过隐式转换为float再进行赋值
    float f1 = 3.14f;
    cout << f1 << endl;
    double d1 = 3.14;
    cout << d1 << endl;
    float f2 = 3.1415926f;
    cout << f2 << ":" << sizeof(f2) << endl;
    double d2 = 3.1415926;
    cout << d2 << ":" << sizeof(d2) << endl;
}