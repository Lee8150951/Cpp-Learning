//
// Created by Jacob Lee on 2021/12/22.
//
#include "iostream"
using namespace std;

// 父类
class Base {
public:
    int m_A;
    Base() {
        m_A = 100;
    }
    void func() {
        cout << "this is base-func." << endl;
    }
};

// 子类
class Son: public Base{
public:
    int m_A;
    Son() {
        m_A = 200;
    }
    void func() {
        cout << "this is son-func." << endl;
    }
};

// 调用
int main() {
    Son son;
    cout << son.m_A << endl;
    cout << son.Base::m_A << endl;
    son.func();
    son.Base::func();
    return 0;
}