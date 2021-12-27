#include <iostream>
#include "string"
using namespace std;

// 类模板
template<class NameType, class AgeType>
class Person {
public:
    NameType m_Name;
    AgeType m_Age;

    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }
};

int main() {
    Person<string, int> person("Jack", 18);
    cout << person.m_Name << endl;
    cout << person.m_Age << endl;
    return 0;
}