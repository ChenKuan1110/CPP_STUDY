#pragma once
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Person
{
  public:
    Person(T1 name, T2 age);
    void showInfo();
    T1 name;
    T2 age;
};