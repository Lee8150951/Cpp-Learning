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

    vector<int> v2;
    for (int i = 10; i < 20; ++i) {
        v2.push_back(i);
    }
    printVector(v2);

    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}