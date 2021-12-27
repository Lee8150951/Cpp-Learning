#include "iostream"
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Hello Human" << endl;
    }
};

class Cat: public Animal{
public:
    virtual void speak() {
        cout << "Miao Human" << endl;
    }
};

// 地址早绑定，在编译阶段确定好了函数的地址
// 如果想要执行猫说话，那么函数地址不能提前绑定，需要在运行阶段进行绑定，也就是地址晚绑定
// 如果要实现地址晚绑定就需要使用到关键字virtual
void doSpeak(Animal &animal) {
    animal.speak();
}

// 调用
int main() {
    Cat cat;
    doSpeak(cat);
    return 0;
}