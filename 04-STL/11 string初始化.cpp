//
// Created by Jacob Lee on 2021/12/28.
//
#include "iostream"
#include "string"
using namespace std;

int main() {
    string str_01; // 默认构造

    const char* str = "Hello World";
    string str_02(str); // 使用字符串s进行初始化
    cout << str_02 << endl;

    string str_03(str_02); // 拷贝构造
    cout << str_03 << endl;

    string str_04(10, 'a'); // n个字符初始化
    cout << str_04 << endl;
}