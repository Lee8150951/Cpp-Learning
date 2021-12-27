//
// Created by Jacob Lee on 2021/12/20.
//
#include "iostream"
#include "string"
using namespace std;

class Person {
public:
    int m_A;
    int m_B;

//    // 成员函数重载+号
//    Person operator+(Person & p) {
//        Person temp;
//        temp.m_A = this->m_A + p.m_A;
//        temp.m_B = this->m_B + p.m_B;
//        return temp;
//    }
};

// 全局函数重载
Person operator+(Person &p1, Person&p2) {
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

// 调用
int main() {
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 20;
    p2.m_B = 20;
    Person p3 = p1 + p2;
    cout << p3.m_A << endl;
    cout << p3.m_B << endl;
    return 0;
}