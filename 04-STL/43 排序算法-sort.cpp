//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "string"
using namespace std;

class mySort {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

void printVector(int val) {
    cout << val << " ";
}

int main() {
    // 内置类型
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), printVector);
    cout << endl;

    sort(v.begin(), v.end(), mySort());
    for_each(v.begin(), v.end(), printVector);
    cout << endl;
}