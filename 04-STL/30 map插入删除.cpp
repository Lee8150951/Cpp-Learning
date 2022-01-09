//
// Created by Jacob Lee on 2022/1/8.
//
#include "iostream"
#include "map"
using namespace std;

void printMap(const map<int, int> &m) {
    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << "; ";
    }
    cout << endl;
}

int main() {
    map<int, int> m1;
    // 第一种插入元素（将匿名的队组加入map中）
    m1.insert(pair<int, int>(1, 10));
    // 第二种插入元素（使用make_pair）
    m1.insert(make_pair(2, 20));
    // 第三种插入元素
    m1.insert(map<int, int>::value_type(3, 30));
    // 第四种利用中括号
    m1[4] = 40;
    printMap(m1);

    cout << m1[1] << endl;

    // 删除元素
    m1.erase(m1.begin());
    printMap(m1);

    // 通过key删除
    m1.erase(3);
    printMap(m1);

    // 清空
    m1.clear();
    printMap(m1);
    return 0;
}