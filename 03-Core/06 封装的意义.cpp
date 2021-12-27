//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
using namespace std;

const double PI = 3.14;

// 设计一个圆的类
class Circle {
    // 访问权限
public:
    // 属性
    int m_r;
    // 行为
    double calculate() {
        return 2 * PI * m_r;
    }
};

int main() {
    // 创建类对象
    Circle cl;
    cl.m_r = 10;
    cout << cl.calculate() << endl;
    return 0;
}