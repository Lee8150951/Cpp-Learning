//
// Created by Jacob Lee on 2021/11/27.
//
#include "iostream"
using namespace std;

int main() {
    int array[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++) {
        cout << array[i] << endl;
    }
    return 0;
}