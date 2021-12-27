#include "iostream"
using namespace std;

class Calculator {
    // 在实现一个诸如计算器的类时，提倡开闭原则
    // 开闭原则：对拓展进行开放，对修改进行关闭
public:
    int m_Num1;
    int m_Num2;
    virtual int getResult() {
        return 0;
    }
};

// 加法计算器类（只做加法运算）
class AddCalculator: public Calculator {
public:
    int getResult() {
        return m_Num1 + m_Num2;
    }
};

// 减法计算器类（只做减法运算）
class SubCalculator: public Calculator {
public:
    int getResult() {
        return m_Num1 - m_Num2;
    }
};

// 乘法计算器类（只做乘法运算）
class MultiCalculator: public Calculator {
public:
    int getResult() {
        return m_Num1 * m_Num2;
    }
};

// 调用
int main() {
    // 指针指向加法运算器
    Calculator * calculator = new AddCalculator;
    calculator->m_Num1 = 10;
    calculator->m_Num2 = 10;
    cout << calculator->m_Num1 << "+" << calculator->m_Num2 << "=" << calculator->getResult() << endl;
    // 销毁calculator
    delete calculator;
    // 指针指向减法运算器
    calculator = new SubCalculator;
    calculator->m_Num1 = 10;
    calculator->m_Num2 = 10;
    cout << calculator->m_Num1 << "-" << calculator->m_Num2 << "=" << calculator->getResult() << endl;
    delete calculator;
    // 指针指向乘法运算器
    calculator = new MultiCalculator;
    calculator->m_Num1 = 10;
    calculator->m_Num2 = 10;
    cout << calculator->m_Num1 << "*" << calculator->m_Num2 << "=" << calculator->getResult() << endl;
    delete calculator;
    return 0;
}