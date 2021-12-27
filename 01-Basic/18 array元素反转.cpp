//
// Created by Jacob Lee on 2021/11/26.
//
#include "iostream"
using namespace std;

int main() {
    int array[] = {1, 3, 2, 5, 4};
    int length = sizeof(array) / sizeof(array[0]);
    int tail = length - 1 ;
    int head = 0;
    while(head < tail) {
        int temp = array[head];
        array[head] = array[tail];
        array[tail] = temp;
        head++;
        tail--;
    }

    for(int j = 0; j < length; j++) {
        cout << array[j] << endl;
    }
    return 0;
}