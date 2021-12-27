//
// Created by Jacob Lee on 2021/12/21.
//
#include "iostream"
#include "string"
using namespace std;

class Person {
public:
    string m_Name;
    int m_Age;

    Person(string name, int age): m_Name(name), m_Age(age) {}

    // 重载关系运算符==
    bool operator==(Person &p) {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name) {
            return true;
        }
        return false;
    }

    // 重载关系运算符!=
    bool operator!=(Person &p) {
        if (this->m_Age != p.m_Age || this->m_Name != p.m_Name) {
            return true;
        }
        return false;
    }
};

// 调用
int main() {
    Person p1("Tom", 18);
    Person p2("Tom", 19);
    if (p1 == p2) {
        cout << "p1与p2相等" << endl;
    } else if (p1 != p2) {
        cout << "p1与p2不相等" << endl;
    }
    return 0;
}