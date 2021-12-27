//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
using namespace std;

class Person {
public:
    int m_Age;
    int * m_Height;
    Person() {
        cout << "Person默认构造函数调用" << endl;
    }
    Person(int age, int height) {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person有参构造函数调用" << endl;
    }
    // 深拷贝构造函数
    Person(const Person &p) {
        m_Age = p.m_Age;
        // 深拷贝
        // 编译器默认执行：m_Height = p.m_Height
        m_Height = new int(*p.m_Height);
    }
    ~Person() {
        // 将堆区开辟出来的数据做释放操作
        if(m_Height != NULL) {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person析构函数调用" << endl;
    }
};

// 调用
int main() {
    Person p1(18, 170);
    cout << "P1的年龄：" << p1.m_Age << "身高：" << *p1.m_Height <<endl;
    Person p2(p1);
    cout << "P2的年龄：" << p2.m_Age << "身高：" << *p2.m_Height  << endl;
    return 0;
}