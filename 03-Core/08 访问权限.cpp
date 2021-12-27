//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
#include "string"
using namespace std;

class Person {
public:
    // 公共权限
    string m_Name;
protected:
    // 保护权限
    string m_Car;
private:
    // 私有权限
    int m_Password;
public:
    void func() {
        m_Name = "John";
        m_Car = "Lexus";
        m_Password = 123456;
    }
};

int main() {
    // 实例化对象
    Person p1;
    p1.m_Name = "Jack";
    // p1.m_Car = "Benz";
    // p1.m_Password = 654321;
    return 0;
}