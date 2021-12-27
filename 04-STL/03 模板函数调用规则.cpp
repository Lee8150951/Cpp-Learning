#include <iostream>
using namespace std;

void myPrint(int a, int b) {
    cout << "普通函数调用" << endl;
}

template<class T>
void myPrint(T a, T b) {
    cout << "模板函数调用" << endl;
}

// 模板函数重载
template<class T>
void myPrint(T a, T b, T c) {
    cout << "模板重载函数调用" << endl;
}

int main() {
    int a = 10;
    int b = 10;
    myPrint(10, 10);
    myPrint("a", "b");
    myPrint(10, 10, 100);
    return 0;
}