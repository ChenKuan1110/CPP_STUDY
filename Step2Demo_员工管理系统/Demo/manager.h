#pragma once
#include <iostream>
using namespace std;
#ifndef MANAGER_H
#define MANAGER_H

#include "worker.h"

class Manager : public Worker
{
public:
    Manager(int id, string name, int dId);
    void showInfo(); // 展示个人信息
    string getDepartmentName(); // 获取部门名称
    ~Manager();
};

#endif // MANAGER_H
