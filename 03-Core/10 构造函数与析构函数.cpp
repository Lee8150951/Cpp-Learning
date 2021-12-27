//
// Created by Jacob Lee on 2021/12/17.
//
#include "iostream"
#include "string"
using namespace std;

// 对象的初始化和清理
class Person {
public:
    // 构造函数（没有返回值，不用void，函数名与类名相同）
    Person() {
        cout << "构造函数已调用" << endl;
    }
    // 析构函数（没有返回值，不写void，名称前加上~）
    ~Person() {
        cout << "析构函数已调用" << endl;
    }
};

int main() {
    static Person p1;
    return 0;
}