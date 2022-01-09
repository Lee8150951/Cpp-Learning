//
// Created by Jacob Lee on 2021/12/28.
//
#include "iostream"
#include "string"
using namespace std;

int main() {
    string str_01;

    str_01 = "Hello World";
    cout << str_01 << endl;

    string str_02;
    str_02 = str_01;
    cout << str_02 << endl;

    str_01 = 'a';
    cout << str_01 << endl;

    str_01.assign("Hello Cpp");
    cout << str_01 << endl;

    str_01.assign("Hello Cpp", 5);
    cout << str_01 << endl;

    str_01.assign(str_02);
    cout << str_01 << endl;

    str_01.assign(10, 'a');
    cout << str_01 << endl;
}