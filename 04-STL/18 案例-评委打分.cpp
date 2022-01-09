//
// Created by Jacob Lee on 2021/12/31.
//

#include "iostream"
#include "string"
#include "vector"
#include "deque"
#include "algorithm"
#include "ctime"
using namespace std;

class Person {
public:
    string m_Name;
    int m_Score;
    // 构造函数
    Person(string name, int score): m_Name(name), m_Score(score) {}
};

// 创建选手
void createPerson(vector<Person> &v) {
    string nameSpeed = "ABCDE";
    for (int i = 0; i < 5; i++) {
        string name = "Player";
        name += nameSpeed[i];
        // cout << name << endl;
        int score = 0;
        Person p(name, score);
        // 将创建的对象放入容器中
        v.push_back(p);
    }
}

// 测试打印
void printVector(const vector<Person> &v) {
    for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++) {
        cout << "选手" << it->m_Name << "的分数是：" << it->m_Score << endl;
    }
}

// 打分函数
void setScore(vector<Person> &v) {
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        // 存放分数至deque容器中
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            // 给定随机分
            int score = rand() % 41 + 60;
            d.push_back(score);
        }
        sort(d.begin(), d.end());
        // 去除最高分最低分
        d.pop_back();
        d.pop_front();
        // 取平均分
        int sum = 0;
        for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
            sum += *dit;
        }
        int avg = sum / d.size();

        // 将平均分赋值给选手
        it->m_Score = avg;
    }
}

int main() {
    // 添加随机数种子
    srand((unsigned int) time(NULL));
    // 创建选手
    vector<Person> v;
    // 给选手打分
    createPerson(v);
    setScore(v);
    // 显示最后得分
    printVector(v);
    return 0;
}