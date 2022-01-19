//
// Created by Jacob Lee on 2022/1/19.
//
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void printVector(int val) {
    cout << val << " ";
}

int main() {
    vector<int> v1;
    for (int i = 0; i <= 10; i++) {
        v1.push_back(i);
    }

    vector<int> v2;
    for (int i = 5; i <= 15; i++) {
        v2.push_back(i);
    }

    // 求交集
    vector<int> intersection_target;
    intersection_target.resize(min(v1.size(), v2.size()));
    vector<int>::iterator intersection_it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), intersection_target.begin());
    for_each(intersection_target.begin(), intersection_it, printVector);
    cout << endl;

    // 求并集
    vector<int> union_target;
    intersection_target.resize(v1.size() + v2.size());
    vector<int>::iterator union_it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), intersection_target.begin());
    for_each(intersection_target.begin(), union_it, printVector);
    cout << endl;

    // 求差集
    vector<int> difference_target;
    intersection_target.resize(max(v1.size(), v2.size()));
    vector<int>::iterator difference_it01 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), intersection_target.begin());
    for_each(intersection_target.begin(), difference_it01, printVector);
    cout << endl;
    vector<int>::iterator difference_it02 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), intersection_target.begin());
    for_each(intersection_target.begin(), difference_it02, printVector);
    cout << endl;
}