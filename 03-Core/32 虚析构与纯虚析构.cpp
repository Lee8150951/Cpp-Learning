#include "iostream"
#include "string"
using namespace std;

class Base {
public:
    // 只要有一个纯虚函数，这个类就被称为抽象类
    virtual void func() = 0;
//    // 利用虚析构可以解决父类指针释放子类对象时不干净的问题
//    virtual ~Base() {
//        cout << "Base析构函数调用" << endl;
//    }
    // 纯虚析构 需要声明也需要实现
    // 有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
    virtual ~Base() = 0;
};

Base::~Base() {
    cout << "Base析构函数调用" << endl;
};

class Son: public Base {
public:
    string *m_Name;
    void func() {
        cout << *m_Name << endl;
    }
    Son(string name) {
        cout << "Son构造函数调用" << endl;
        m_Name = new string(name);
    }
    ~Son() {
        if (m_Name != NULL) {
            cout << "Son析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
};

// 调用
int main() {
    Base * base = new Son("Tom");
    base->func();
    // 父类的指针在析构的时候，不会调用子类中的析构函数，导致子类如果有堆区属性，会出现内存的泄漏
    delete base;
    return 0;
}