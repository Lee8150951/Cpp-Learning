//
// Created by Jacob Lee on 2021/11/29.
//
#include "iostream"
#include "string"
using namespace std;

struct Student {
    string name;
    int age;
    int score;
} s3;

int main() {
    // 创建学生结构体变量
    struct Student s = {"wsy", 18, 100};
    // 通过指针指向结构体变量
    Student * p = &s;
    // 通过指针访问结构体变量中的数据
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;
    return 0;
}