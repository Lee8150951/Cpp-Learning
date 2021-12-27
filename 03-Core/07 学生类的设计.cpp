//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
#include "string"
using namespace std;


// 设计一个学生类
class Student {
public:
    string m_Name;
    int m_Id;

    void showStudent() {
        cout << m_Name << ": " << m_Id << endl;
    }

    // 通过行为进行实例化
    void setStudent(string name, int id) {
        m_Name = name;
        m_Id = id;
    }
};

int main() {
    // 创建学生
    Student stu;
    stu.setStudent("John", 11);
    stu.showStudent();
    return 0;
}