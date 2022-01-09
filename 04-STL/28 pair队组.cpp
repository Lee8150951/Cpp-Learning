//
// Created by Jacob Lee on 2022/1/6.
//
#include "iostream"
#include "string"
using namespace std;

int main() {
    pair<string, int> p1("Tom", 10);
    cout << p1.first << "：" << p1.second << endl;

    pair<string, int> p2 = make_pair("Jerry", 8);
    cout << p2.first << "：" << p2.second << endl;
}