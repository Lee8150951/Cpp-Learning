//
// Created by Jacob Lee on 2022/1/17.
//
#include "iostream"
using namespace std;
#include "algorithm"
#include "vector"

class PrintVector {
public:
    void operator()(vector<int> v) {
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
};

// 二元谓词
class myCompare {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(0);

    PrintVector printVector;
    printVector(v);

    // 排序
    sort(v.begin(), v.end());
    printVector(v);

    // 使用函数对象改变算法策略
    sort(v.begin(), v.end(), myCompare());
    printVector(v);
}