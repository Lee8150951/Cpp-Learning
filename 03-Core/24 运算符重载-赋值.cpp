//
// Created by Jacob Lee on 2021/12/21.
//
#include "iostream"
using namespace std;

class Person {
public:
    int *m_Age;
    Person(int age) {
        m_Age = new int(age);
    }
    ~Person() {
        if(m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
    }

    // 重载赋值运算符
    Person& operator=(Person &p) {
        // 先判断是有否有属性在堆区
        if(m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
        // 深拷贝
        m_Age = new int(*p.m_Age);
        // 返回自身
        return *this;
    }
};

// 调用
int main() {
    Person p1(18);
    Person p2(20);
    p2 = p1;
    cout << *p2.m_Age << endl;
    return 0;
}