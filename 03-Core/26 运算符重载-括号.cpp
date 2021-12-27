//
// Created by Jacob Lee on 2021/12/21.
//
#include "iostream"
#include "string"
using namespace std;

class simulatePrint {
public:
    // 重载函数调用运算符
    void operator()(string txt) {
        cout << txt;
    }
};

// 调用
int main() {
    simulatePrint sp;
    sp("Hello World!");
    return 0;
}