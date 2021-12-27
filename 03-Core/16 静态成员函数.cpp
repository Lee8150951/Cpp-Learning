//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
using namespace std;

class Person {
public:
    static int m_A;
    int m_B;
    static void func() {
        // 静态成员函数可以访问静态成员变量
        m_A = 100;
        // 静态成员函数不可以访问非静态成员变量
        // m_B = 100;
        cout << "static void func调用" << endl;
    }
};

// 注意：静态成员变量需要在类内声明，在类外进行初始化
int Person::m_A;

// 调用
int main() {
    // 通过对象访问
    Person p1;
    p1.func();
    // 通过类名访问
    Person::func();
    return 0;
}