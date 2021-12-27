//
// Created by Jacob Lee on 2021/12/21.
//
#include "iostream"
using namespace std;

// 自定义整型
class Integer {
    friend ostream &operator<<(ostream &cout, Integer i);
public:
    Integer() {
        m_Num = 0;
    }
    // 重载前置递增
    Integer& operator++() {
        m_Num++;
        return *this;
    }
    // 重载后置递增（int表示占位参数，用于区分前置和后置）
    Integer& operator++(int) {
        Integer temp = *this;
        m_Num++;
        return temp;
    }
private:
    int m_Num;
};

// 重载左移运算符
ostream &operator<<(ostream &cout, Integer i) {
    cout << i.m_Num;
    return cout;
}

// 调用
int main() {
    Integer int1;
    cout << ++int1 << endl;
    cout << int1++ << endl;
    cout << int1 << endl;
    return 0;
}