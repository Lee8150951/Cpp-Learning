//
// Created by Jacob Lee on 2021/12/20.
//
#include "iostream"
#include "string"
using namespace std;

class Building;

class friendClass{
public:
    Building * building;
    friendClass();
    void visit01();
    void visit02();
};

class Building {
    friend void friendClass::visit01();
public:
    string  m_SittingRoom;

    Building(): m_SittingRoom("客厅"), m_BedRoom("卧室") {}
private:
    string m_BedRoom;
};

friendClass::friendClass() {
    building = new Building;
}
// 可以访问Building中的私有成员
void friendClass::visit01() {
    cout << "当前访问的是" << building->m_SittingRoom << endl;
    cout << "当前访问的是" << building->m_BedRoom << endl;
}
// 不可以访问Building中的私有成员
void friendClass::visit02() {
    cout << "当前访问的是" << building->m_SittingRoom << endl;
//    cout << "当前访问的是" << building->m_BedRoom << endl;
}

// 调用
int main() {
    friendClass f1;
    f1.visit01();
    f1.visit02();
    return 0;
}