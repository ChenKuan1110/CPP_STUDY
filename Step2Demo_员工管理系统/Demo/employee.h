#pragma once
#include <iostream>
using namespace std;
#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "worker.h"

class Employee : public Worker
{
public:
    Employee(int id, string name, int dId);
    void showInfo(); // 展示个人信息
    string getDepartmentName(); // 获取部门名称
    ~Employee();
};

#endif // EMPLOYEE_H
