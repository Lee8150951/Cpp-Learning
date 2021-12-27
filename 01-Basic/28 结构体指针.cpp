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
    // 创建结构体数组
    struct Student stu[3] = {
            {"wsy", 20, 100},
            {"lys", 20, 90},
            {"test", 5, 0}
    };
    for(int i = 0; i < 3; i++) {
        cout << "姓名：" << stu[i].name << "年龄：" << stu[i].age << "分数：" << stu[i].score << endl;
    }
    return 0;
}