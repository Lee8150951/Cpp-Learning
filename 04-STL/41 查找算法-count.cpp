//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "string"
using namespace std;

class Person {
public:
    string m_Name;
    int m_Age;
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    bool operator==(const Person & p) {
        if (this->m_Age == p.m_Age) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    // 内置类型
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
        v.push_back(i);
    }

    // 自定义类型
    vector<Person> p;
    Person p1("a", 10);
    p.push_back(p1);
    Person p2("b", 10);
    p.push_back(p2);
    Person p3("c", 10);
    p.push_back(p3);
    Person p4("d", 40);
    p.push_back(p4);

    int num_count = count(v.begin(), v.end(), 2);
    cout << num_count << endl;

    Person target("t", 10);
    int person_count = count(p.begin(), p.end(), target);
    cout << person_count << endl;
}