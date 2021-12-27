//
// Created by Jacob Lee on 2021/12/16.
//
#include "iostream"
using namespace std;

int& quote_return() {
    static int a = 10;
    return a;
}

int main() {
    cout << quote_return() << endl;
    quote_return() = 1000;
    cout << quote_return() << endl;
    return 0;
}