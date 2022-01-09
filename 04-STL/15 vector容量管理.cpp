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
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty()) {
        cout << "空" << endl;
    } else {
        cout << "非空" << endl;
    }

    int cap = v1.capacity();
    cout << cap << endl;

    int size = v1.size();
    cout << size << endl;

    // 重新制定大小
    v1.resize(15);
    printVector(v1);

    // 重新制定大小（重载）
    v1.resize(20, 1);
    printVector(v1);
}