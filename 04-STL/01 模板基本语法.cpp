#include <iostream>
using namespace std;

// 交换两个整型
void swapInt(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
// 交换两个浮点
void swapFloat(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

// 泛型编程（函数模板）
template <typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    swapInt(a, b);
    cout << "swapInt a = " << a << endl;
    cout << "swapInt b = " << b << endl;
    // 利用函数模板进行交换
    // 两种方式使用函数模板
    // 1、自动类型推导
    mySwap(a, b);
    cout << "mySwap a = " << a << endl;
    cout << "mySwap b = " << b << endl;
    // 2、显示指定类型（此时通过尖括号告诉编译器T在这里指的是int）
    mySwap<int>(a, b);
    cout << "mySwap a = " << a << endl;
    cout << "mySwap b = " << b << endl;
}