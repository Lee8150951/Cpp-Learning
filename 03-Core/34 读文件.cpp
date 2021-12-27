//
// Created by Jacob Lee on 2021/12/23.
//
#include "iostream"
#include "fstream"

using namespace std;


void readFile() {
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    // 读数据
    // 方法一
    char buf01[1024] = {0};
    while(ifs >> buf01) {
        cout << buf01 << endl;
    }
    // 方法二
    char buf02[1024] = {0};
    while(ifs.getline(buf02, sizeof(buf02))) {
        cout << buf02 << endl;
    }
    // 方法三
    string buf03;
    while(getline(ifs, buf03)) {
        cout << buf03 << endl;
    }
    // 方法四
    char c;
    while((c = ifs.get()) != EOF) {
        cout << c;
    }
    ifs.close();
}

int main() {
    readFile();
    return 0;
}