//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
#include "string"
using namespace std;

class Phone {
public:
    string m_PName;
    Phone(string pName): m_PName(pName) {};
};

class Person {
public:
    string m_Name;
    Phone m_Phone;
    // 此处的m_Phone(pName)相当于做了一个Phone m_Phone = pName的操作（隐式转换法）
    Person(string name, string pName): m_Name(name), m_Phone(pName) {};
};


// 调用
int main() {
    Person p("Jacob", "iPhone");
    cout << p.m_Name << endl;
    cout << p.m_Phone.m_PName << endl;
    return 0;
}