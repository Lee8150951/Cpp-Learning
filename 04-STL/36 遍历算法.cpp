//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

// 普通函数
void printVector01(int val) {
    cout << val << " ";
}

// 仿函数
class printVector02 {
public:
    void operator()(int val) {
        cout << val << " ";
    }
};

// transform处理函数
class Transform {
public:
    int operator()(int val) {
        return val + 1;
    }
};

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    // 普通函数调用
    for_each(v.begin(), v.end(), printVector01);
    cout << endl;

    // 仿函数调用
    for_each(v.begin(), v.end(), printVector02());
    cout << endl;

    // 设定目标容器
    vector<int> vtarget;
    // 开辟空间
    vtarget.resize(v.size());
    transform(v.begin(), v.end(), vtarget.begin(), Transform());
    for_each(vtarget.begin(), vtarget.end(), printVector01);
}