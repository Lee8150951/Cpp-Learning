//
// Created by Jacob Lee on 2021/12/27.
//

#include "10 person.h"

// 类模板构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->m_Name = name;
    this->m_Age = age;
}

// 类模板成员函数实现
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
    cout << "name：" << this->m_Name << endl;
    cout << "age：" << this->m_Age << endl;
}

int main() {
    Person<string, int> person("Jack", 18);
    person.showPerson();
    return 0;
}