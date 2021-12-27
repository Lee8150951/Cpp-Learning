//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
using namespace std;

class Person {
public:
    int m_A;
    int m_B;
    int m_C;
//    // 传统的初始化操作
//    Person(int a, int b, int c) {
//        m_A = a;
//        m_B = b;
//        m_C = c;
//    }
    // 初始化列表操作
    Person(): m_A(10), m_B(20), m_C(30) {}
    // 传参初始化列表
    Person(int a, int b, int c): m_A(a), m_B(b), m_C(c) {}
};

// 调用
int main() {
    Person p1(10, 20, 30);
    cout << p1.m_A << p1.m_B << p1.m_C << endl;
    Person p2;
    cout << p2.m_A << p2.m_B << p2.m_C << endl;
    Person p3(10, 20, 30);
    cout << p3.m_A << p3.m_B << p3.m_C << endl;
    return 0;
}