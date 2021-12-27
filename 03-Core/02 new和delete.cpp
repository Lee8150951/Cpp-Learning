//
// Created by Jacob Lee on 2021/12/10.
//
#include "iostream"
using namespace std;

int * func() {
    // 在堆区创建一个整型数据
    // 注意：new返回的是该数据类型的指针
    int * p = new int(10);
    return p;
}

// new的基本语法
void test01() {
    int * p = func();
    cout << *p << endl;
    // 如果想释放堆区的内存，利用关键字delete
    delete p;
    // 内存已经被释放，再次访问就是非法操作
    cout << *p << endl;
}

// 在堆区使用new开辟数组
void test02() {
    int * arr = new int[10]; // 创建一个10个元素的数组
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    // 释放数组的时候，要加[]才行
    delete[] arr;
}

int main() {
    test01();
    test02();
    return 0;
}