//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
using namespace std;

// 构造函数的分类及调用
class Person {
private:
    int m_Age;
public:
    // 构造函数
    Person() {
        cout << "无参构造函数已调用" << endl;
    }
    // 有参构造函数
    Person(int a) {
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

// 调用
int main() {
    // 无参构造（注意：无参构造属于默认构造，一定不能加括号）
    Person p1;
    // 有参构造
    Person p2(10);
    // 拷贝构造
    Person p3(p1);
    // 显示法（显示调用有参构造）
    Person p4 = Person(10);
    // 匿名对象，特点是：当前行执行结束后，系统会立即回收该匿名对象
    Person(10);
    // 不要利用拷贝构造函数来初始化一个匿名对象
    return 0;
}