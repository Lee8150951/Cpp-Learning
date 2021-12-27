#include "iostream"
using namespace std;

// 动物类
class Animal {
public:
    int m_Age;
    Animal(): m_Age(18) {}
};

// 羊类
class Sheep:virtual public Animal{};

// 驼类
class Camel:virtual public Animal{};

// 羊驼类
class Alcapa: public Sheep, public Camel{};

// 调用
int main() {
    Alcapa alcapa;
    alcapa.Sheep::m_Age = 100;
    alcapa.Camel::m_Age = 80;
    cout << alcapa.Sheep::m_Age << endl;
    cout << alcapa.Camel::m_Age << endl;
    return 0;
}