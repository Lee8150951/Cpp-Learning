//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "ctime"
using namespace std;

void printVector(int val) {
    cout << val << " ";
}

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    reverse(v.begin(), v.end());
    for_each(v.begin(), v.end(), printVector);
}