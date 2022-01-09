//
// Created by Jacob Lee on 2022/1/4.
//
#include "iostream"
#include "list"
using namespace std;

int main() {
    // 默认构造
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    cout << L1.front() << endl;
    cout << L1.back() << endl;
}