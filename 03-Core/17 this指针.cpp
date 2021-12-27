//
// Created by Jacob Lee on 2021/12/20.
//
#include "iostream"
using namespace std;

class Person {
public:
    int age;
    Person(int age) {
        // this指针指向的是被调用的成员函数所属的对象
        this->age = age;
    }
    Person & PersonAddAge(Person &p) {
        this->age += p.age;
        return *this;
    }
};

// 调用
int main() {
    Person p1(18);
    cout << p1.age << endl;
    Person p2(20);
    p2.PersonAddAge(p1).PersonAddAge(p1);
    cout << p2.age << endl;
    return 0;
}