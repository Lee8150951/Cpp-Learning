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

class GreaterTwo {
public:
    bool operator()(int val) {
        return val > 2;
    }
};

class GreaterTwenty {
public:
    bool operator()(const Person & p) {
        return p.m_Age > 20;
    }
};

int main() {
    // 内置类型
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    // 自定义类型
    vector<Person> p;
    Person p1("a", 10);
    p.push_back(p1);
    Person p2("b", 20);
    p.push_back(p2);
    Person p3("c", 30);
    p.push_back(p3);
    Person p4("d", 40);
    p.push_back(p4);

    int num_count = count_if(v.begin(), v.end(), GreaterTwo());
    cout << num_count << endl;

    int person_count = count_if(p.begin(), p.end(), GreaterTwenty());
    cout << person_count << endl;
}