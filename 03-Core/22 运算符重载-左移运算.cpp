//
// Created by Jacob Lee on 2021/12/20.
//
#include "iostream"
using namespace std;

class Person {
public:
    int m_A;
    int m_B;
    Person(): m_A(10), m_B(10) {}
};

// 全局函数重载左移运算符（本质是operator<< (cout, p)）
ostream &operator<<(ostream &cout, Person &p) {
    cout << "m_A：" << p.m_A << "；m_B：" << p.m_B;
    return cout;
}

// 调用
int main() {
    Person p;
    cout << p << endl;
    return 0;
}