//
// Created by Jacob Lee on 2021/12/23.
//
#include "iostream"
#include "fstream"

using namespace std;

class Person {
public:
    char m_Name[64];
    int m_Age;
};

int main() {
    ifstream ifs;
    ifs.open("person.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return 0;
    }
    Person person;
    ifs.read((char *)& person, sizeof(Person));
    cout << person.m_Name << endl;
    cout << person.m_Age << endl;
    ifs.close();
    return 0;
}