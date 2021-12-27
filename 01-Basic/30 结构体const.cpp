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
};

void printStruct(const struct Student * s) {
    cout << "姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score << endl;
}

int main() {
    struct Student s = {"lys", 23, 90};
    printStruct(&s);
    return 0;
}