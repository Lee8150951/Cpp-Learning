#include "iostream"
using namespace std;

class Base {
public:
    // 只要有一个纯虚函数，这个类就被称为抽象类
    virtual void func() = 0;
};

class Son: public Base {
public:
    void func() {
        cout << "Hello, Virtual Class!" << endl;
    }
};

// 调用
int main() {
    Base * base = new Son;
    base->func();
    delete base;
    return 0;
}