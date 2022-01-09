//
// Created by Jacob Lee on 2022/1/4.
//

#include "iostream"
#include "queue"
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while (!q.empty()) {
        // 队头
        cout << q.front() << endl;
        // 队尾
        cout << q.back() << endl;
        // 出队
        q.pop();
    }
}