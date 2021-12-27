//
// Created by Jacob Lee on 2021/11/11.
//
#include "iostream"
using namespace std;

int main() {
    // 用户输入分数
    int score = 0;
    cout << "请输入一个数：";
    cin >> score;
    // 打印用户输入的分数
    cout << "您的分数是：" << score << endl;
    // 判断分数是否大于600
    if (score > 600) {
        cout << "大于600分" << endl;
    }
    return 0;
}