//
// Created by Jacob Lee on 2021/12/27.
//
#include "iostream"
#include "string"
using namespace std;

template<class NameType, class AgeType>
class Person{
public:
    NameType m_Name;
    AgeType m_Age;
    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson() {
        cout << "name：" << this->m_Name << endl;
        cout << "age：" << this->m_Age << endl;
    }
};

int main() {
    Person<string, int> person("Jack", 20);
    person.showPerson();
    return 0;
}