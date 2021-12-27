//
// Created by Jacob Lee on 2021/11/29.
//
#include "iostream"
using namespace std;

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int * p = arr; // arr实际上就是数字第一个元素的地址
    // cout << *p << endl;
    // p++; // 让指针向后偏移4个字节
    // cout << *p << endl;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        cout << *p << endl;
        p++;
    }
    return 0;
}