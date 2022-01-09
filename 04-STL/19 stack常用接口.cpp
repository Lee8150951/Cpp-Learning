//
// Created by Jacob Lee on 2021/12/31.
//

#include "iostream"
#include "stack"
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}