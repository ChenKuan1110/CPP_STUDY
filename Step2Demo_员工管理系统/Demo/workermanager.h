#pragma once // 防止头文件重复包含
#include <iostream>
using namespace std;
#ifndef WORKERMANAGER_H
#define WORKERMANAGER_H
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
# define FILE_NAME "works.txt" // 定义文件名
#include <fstream>

class WorkerManager
{
public:
    WorkerManager();
    void showMenu(); // 显示菜单
    void exitSystem(); // 退出系统
    void addEmployee(); // 添加职工
    void save(); // 保存数据到文件
    void showEmployee(); // 显示职工
    int m_empNum; // 职工人数
    bool m_fileIsEmpty; // 文件是否存在标志
    int getEmpNum(); // 统计文件中的员工数量
    void initEmp(); // 初始化职工指针数组
    void deleteEmp(); // 删除员工信息
    void modifyEmp(); // 修改职工
    void findEmp(); // 查找职工
    void sortEmp(); // 给职工排序
    void clearFile(); // 清空文件
    bool isIdExist(int id); // 工具函数，判断id是否存在
    int isEmpExist(int id); // 根据职工编号判断职工是否存在
    Worker ** m_empArray; // 职工数组指针
    void helperFunc();
    ~WorkerManager();
};

#endif // WORKERMANAGER_H
