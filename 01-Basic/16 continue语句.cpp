//
// Created by Jacob Lee on 2021/11/15.
//
#include "iostream"
using namespace std;

int main() {
    for(int i = 0; i < 100; i++) {
        if(i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}