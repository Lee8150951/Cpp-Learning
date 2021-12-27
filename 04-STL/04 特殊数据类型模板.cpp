#include <iostream>
#include "string"
using namespace std;

class Person {
public:
    string m_Name;
    int m_Age;
    Person(): m_Name("Jack"), m_Age(20) {}
};

// 对比两个数是否相等
template<class T>
bool myCompare(T &a, T &b) {
    if (a == b) {
        return true;
    } else {
        return false;
    }
}

// 利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person &p1, Person &p2) {
    if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a = 100, b = 100;
    bool ret_01 = myCompare(a, b);
    cout << ret_01 << endl;

    Person p1;
    Person p2;
    bool ret_02 = myCompare(p1, p2);
    cout << ret_02 << endl;
    return 0;
}