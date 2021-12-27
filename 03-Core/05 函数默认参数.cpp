//
// Created by Jacob Lee on 2021/12/16.
//
#include "iostream"
using namespace std;

int func(int a, int b = 10, int c = 10) {
    return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a, int b) {
    return a + b;
}

int main() {

}