//
// Created by Jacob Lee on 2021/12/23.
//
#include "iostream"
#include "fstream"

using namespace std;


void makeFile() {
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "Hello World!" << endl;
    ofs.close();
    cout << "执行成功" << endl;
}

int main() {
    makeFile();
    return 0;
}