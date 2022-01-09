//
// Created by Jacob Lee on 2021/12/29.
//
#include "iostream"
#include "vector"
using namespace std;

void printVector(vector<int> &vec) {
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 默认构造
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    printVector(v1);

    // 通过区间方式进行构造
    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    // n个elem方式构造
    vector<int> v3(10, 100);
    printVector(v3);

    // 拷贝构造
    vector<int> v4(v3);
    printVector(v4);
}