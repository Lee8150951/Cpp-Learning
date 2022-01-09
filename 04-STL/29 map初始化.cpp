//
// Created by Jacob Lee on 2022/1/8.
//
#include "iostream"
#include "map"
using namespace std;

void printMap(const map<int, int> &m) {
    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}

int main() {
    // 初始化map
    map<int, int> m1;
    // 插入元素（将匿名的队组加入map中）
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(4, 40));

    printMap(m1);

    // 拷贝构造
    map<int, int> m2(m1);
    printMap(m2);

    // 赋值
    map<int, int> m3;
    m3 = m3;
    printMap(m3);
    return 0;
}