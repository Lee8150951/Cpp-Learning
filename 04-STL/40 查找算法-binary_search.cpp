//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "string"
using namespace std;

int main() {
    // 内置类型
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    if (binary_search(v.begin(), v.end(), 5)) {
        cout << "OK" << endl;
    } else {
        cout << "NO" << endl;
    }
}