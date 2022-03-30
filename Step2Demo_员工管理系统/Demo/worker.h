#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef WORKER_H
#define WORKER_H

// 职工抽象类
class Worker
{
public:
    virtual void showInfo() = 0; // 展示个人信息
    virtual string getDepartmentName() = 0; // 获取部门名称
    int m_id; //  职工编号
    string m_name; // 职工姓名
    int m_departmentId; // 部门编号
//    ~Worker();

};

#endif // WORKER_H
