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
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    cout << *it << endl;
}