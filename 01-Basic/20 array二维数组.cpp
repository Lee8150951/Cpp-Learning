//
// Created by Jacob Lee on 2021/11/27.
//
#include "iostream"
using namespace std;

int main() {
    int score[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}
    };
    int column = sizeof(score) / sizeof(score[0]);
    int raw = sizeof(score[0]) / sizeof(score[0][0]);
    for (int i = 0; i < column; i++) {
        int current = 0;
        for (int j = 0; j < raw; j++) {
            current += score[i][j];
        }
        cout << current << endl;
    }
    return 0;
}