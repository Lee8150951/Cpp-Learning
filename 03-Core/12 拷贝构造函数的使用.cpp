//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
using namespace std;

class Person {
public:
    int m_Age;
    Person() {
        cout << "无参构造函数已调用" << endl;
    }
    Person(int age) {
        m_Age = age;
        cout << "有参构造函数已调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p) {
        // 将传入的类身上所有的属性，拷贝到当前类上
        m_Age = p.m_Age;
        cout << "拷贝构造函数已调用" << endl;
    }
    // 析构函数
    ~Person() {
        cout << "析构函数已调用" << endl;
    }
};

// 通过值传递的方式给函数传值
void doWork01(Person p) {}
void test01() {
    Person p;
    doWork01(p);
}
// 值方式返回局部对象
Person doWork02() {
    Person p1;
    return p1;
}
void test02() {
    Person p = doWork02();
}
// 调用
int main() {
    Person p1(20);
    Person p2(p1);
    cout << "p2数值大小" << p2.m_Age << endl;
    test01();
    test02();
    return 0;
}