#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef BOSS_H
#define BOSS_H

#include "worker.h"

class Boss : public Worker
{
public:
    Boss(int id, string name, int dId);
    ~Boss();
    void showInfo() ; // 展示个人信息
    string getDepartmentName() ; // 获取部门名称
};

#endif // BOSS_H
