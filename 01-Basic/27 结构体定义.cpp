//
// Created by Jacob Lee on 2021/11/29.
//
#include "iostream"
#include "string"
using namespace std;

// 创建学生数据类型
struct Student {
    // 成员列表
    string name; // 姓名
    int age; // 年龄
    int score; // 分数
} s3;

// 通过学生类型创建具体的学生
int main() {
    // 创建方式一：struct Student s1;
    struct Student s1;
    s1.name = "wsy";
    s1.age = 23;
    s1.score = 100;
    cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;
    // 创建方式二：struct Student s2 = {...};
    struct Student s2 = {"lys", 23, 90};
    cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;
    // 创建方式三：创建结构体时顺便创建（见14行）
    s3.name = "test";
    s3.age = 5;
    s3.score = 0;
    cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;
    return 0;
}