//
// Created by Jacob Lee on 2021/12/20.
//
#include "iostream"
using namespace std;

class Building {
    // 声明该函数为友元函数，可以访问该类中的私有成员
    friend void friendFunc(Building &building);
public:
    string  m_SittingRoom;

    Building(): m_SittingRoom("客厅"), m_BedRoom("卧室") {}
private:
    string m_BedRoom;
};

// 全局函数
void friendFunc(Building &building) {
    cout << "正在访问：" << building.m_SittingRoom << endl;
    cout << "正在访问：" << building.m_BedRoom << endl;
}

// 调用
int main() {
    Building b1;
    friendFunc(b1);
    return 0;
}