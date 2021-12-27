//
// Created by Jacob Lee on 2021/12/20.
//
#include "iostream"
#include "string"
using namespace std;

class friendClass;

class Building {
    friend class friendClass;
public:
    string  m_SittingRoom;

    Building(): m_SittingRoom("客厅"), m_BedRoom("卧室") {}
private:
    string m_BedRoom;
};

// 友元类
class friendClass{
public:
    Building * building;

    friendClass() {
        // 创建需要访问的对象
        building = new Building;
    }
    // 参观函数，访问Building中的属性
    void visit() {
        cout << "当前访问的是" << building->m_SittingRoom << endl;
        cout << "当前访问的是" << building->m_BedRoom << endl;
    }
};

// 调用
int main() {
    friendClass f1;
    f1.visit();
    return 0;
}