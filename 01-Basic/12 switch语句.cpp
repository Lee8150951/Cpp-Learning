//
// Created by Jacob Lee on 2021/11/15.
//
#include "iostream"
using namespace std;

int main() {
    int score = 0;
    cout << "请输入分数：";
    cin >> score;
    switch (score) {
        case 10:
            cout << "Perfect!" << endl;
            break;
        case 9:
            cout << "Brilliant!" << endl;
            break;
        case 8:
            cout << "Nice!" << endl;
            break;
        case 7:
            cout << "Well!" << endl;
            break;
        case 6:
            cout << "Fine!" << endl;
            break;
        case 5:
            cout << "OK" << endl;
            break;
        default:
            cout << "Bad" << endl;
    }
    return 0;
}