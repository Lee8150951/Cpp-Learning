//
// Created by Jacob Lee on 2022/1/17.
//
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

class GreaterFive {
public:
    bool operator()(int v) {
        return v > 5;
    }
};

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    // 查找容器中是否存在大于5的数字
    // 使用find_if方法返回的是一个迭代器
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end()) {
        cout << "Cant find" << endl;
    } else {
        cout << "Find it" << endl;
    }
}