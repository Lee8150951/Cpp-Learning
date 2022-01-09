//
// Created by Jacob Lee on 2022/1/6.
//
#include "iostream"
#include "set"
using namespace std;

void printSet(const set<int> &s) {
    for(set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s1;
    // 插入数据只有insert的方式
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    printSet(s1);

    // 拷贝构造
    set<int> s2(s1);
    printSet(s2);

    // 复制构造
    set<int> s3 = s2;
    printSet(s3);
}