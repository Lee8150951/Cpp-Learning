//
// Created by Jacob Lee on 2022/1/6.
//
#include "iostream"
#include "set"
using namespace std;

// 仿函数修改排序规则
class compare {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

void printSet(const set<int, compare> &s) {
    for(set<int, compare>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int, compare> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(30);
    s.insert(30);
    s.insert(40);
    printSet(s);
}