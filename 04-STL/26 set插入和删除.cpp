//
// Created by Jacob Lee on 2022/1/6.
//
#include "iostream"
#include "set"
using namespace std;

void printSet(const set<int> &s) {
    for(set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(30);
    s.insert(30);
    s.insert(40);

    set<int> ::iterator pos = s.find(10);
    cout << *pos << endl;

    cout << s.count(30) << endl;
}