//
// Created by Jacob Lee on 2021/11/15.
//
#include "iostream"
#include "math.h"
using namespace std;

int main() {
    int flag = 100;
    do {
        // 个位数
        int digits = flag % 10;
        // 十位数
        int tens =  flag / 10 % 10;
        // 百位数
        int hundreds = flag / 100 % 10;
        if (pow(digits, 3) + pow(tens, 3) + pow(hundreds, 3) == flag) {
            cout << flag << endl;
        }
        flag += 1;
    } while (flag <= 999);
}