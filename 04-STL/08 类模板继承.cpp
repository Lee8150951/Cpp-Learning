//
// Created by Jacob Lee on 2021/12/27.
//
#include "iostream"
#include "string"
using namespace std;

template<class T>
class Base {
public:
    T m;
};

class Son: public Base<string> {};

// 如果想要灵活的指定父类中T的类型，子类需要是一个类模板
template<class T1, class T2>
class Another: public Base<T1> {
public:
    T2 n;
};

int main() {
    Son son;
    son.m = "1";
    cout << son.m << endl;

    Another<string, int> another;
    another.m = "hello";
    another.n = 20;
    cout << another.m << endl;
    cout << another.n << endl;
}