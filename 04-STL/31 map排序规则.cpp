//
// Created by Jacob Lee on 2022/1/8.
//
#include "iostream"
#include "map"
using namespace std;

class compare {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

int main() {
    map<int, int, compare> m;
    m.insert(make_pair(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(make_pair(3, 30));
    m.insert(make_pair(4, 40));
    m.insert(make_pair(5, 50));
    m.insert(make_pair(6, 60));
    for (map<int, int, compare>::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}