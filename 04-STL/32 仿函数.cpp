//
// Created by Jacob Lee on 2022/1/17.
//
#include "iostream"
#include "string"
using namespace std;

class MyAdd {
public:
    int operator()(int v1, int v2) {
        return v1 + v2;
    }
};

class MyPrint{
public:
    // 记录调用次数
    int count;
    MyPrint() {
        this->count = 0;
    }
    void operator()(string s) {
        cout << s << endl;
        count ++;
    }
};

int main() {
    MyAdd myAdd;
    cout << myAdd(1, 2) << endl;

    MyPrint myPrint;
    myPrint("20202020");
    myPrint("20202020");
    myPrint("20202020");
    myPrint("20202020");
    myPrint("20202020");
    myPrint("20202020");
    cout << myPrint.count << endl;
}