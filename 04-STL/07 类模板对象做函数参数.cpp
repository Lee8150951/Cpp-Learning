//
// Created by Jacob Lee on 2021/12/27.
//
#include "iostream"
#include "string"
using namespace std;

template<class T1, class T2>
class Person {
public:
    T1 m_Name;
    T2 m_Age;

    Person(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson() {
        cout << "name：" << this->m_Name << endl;
        cout << "age：" << this->m_Age << endl;
    }
};

// 1、制定传入类型
void showMethod01(Person<string, int> &person) {
    person.showPerson();
}

// 2、参数模板化
template<class T1, class T2>
void showMethod02(Person<T1, T2> &person) {
    person.showPerson();
}

// 3、对象类型模板化
template<class T>
void showMethod03(T &person) {
    person.showPerson();
}

int main() {
    Person<string, int> p1("Lee", 18);
    showMethod01(p1);
    showMethod02(p1);
    showMethod03(p1);
}