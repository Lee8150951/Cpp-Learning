//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "vector"
#include "numeric"
using namespace std;

int main() {
    vector<int> v;
    v.resize(10);
    fill(v.begin(), v.end(), 100);

    int sum = accumulate(v.begin(), v.end(),0);
    cout << sum << endl;
}