//
// Created by Jacob Lee on 2022/1/4.
//
#include "iostream"
#include "list"
using namespace std;

void printList(const list<int> &L) {
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 默认构造
    list<int> L1;
    L1.push_back(10);
    L1.push_back(30);
    L1.push_back(20);
    L1.push_back(40);

    printList(L1);
    // 反转
    L1.reverse();
    printList(L1);
    // 排序
    L1.sort();
    printList(L1);
}