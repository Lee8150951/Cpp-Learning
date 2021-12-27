//
// Created by Jacob Lee on 2021/12/27.
//
#pragma once
#include "iostream"
#include "string"
using namespace std;

template<class T1, class T2>
class Person {
public:
    T1 m_Name;
    T2 m_Age;

    Person(T1 name, T2 age);

    void showPerson();
};