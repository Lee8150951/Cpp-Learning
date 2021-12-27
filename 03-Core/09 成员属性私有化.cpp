//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
#include "string"
using namespace std;

// 成员属性设置为私有的好处
// 1、可以自己控制读写权限
// 2、对于写可以检测数据的有效性
class Person {
private:
    string m_Name; // 可读可写
    int m_Age; // 只读
    string m_Lover; // 只写
public:
    // 写姓名
    void setName(string name) {
        m_Name = name;
    }
    // 读姓名
    string getName() {
        return m_Name;
    }
    // 获取年龄
    int getAge() {
        m_Age = 0; // 初始化为0岁
        return m_Age;
    }
    // 设置爱人
    void setLover(string lover) {
        m_Lover = lover;
    }
};

int main() {
    Person p1;
    p1.setName("John");
    cout << p1.getName() << endl;
    cout << p1.getAge() << endl;
    p1.setLover("11");
    return 0;
}