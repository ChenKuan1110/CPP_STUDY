#include "manager.h"

Manager::Manager(int id, string name, int dId)
{
    this->m_id  = id;
    this->m_name = name;
    this->m_departmentId = dId;
}

string Manager::getDepartmentName()
{
    return string("经理");
}

void Manager::showInfo()
{
    cout << "职工编号：" << m_id << "\t";
    cout << "职工姓名：" << m_name << "\t";
    cout << "岗位：" << this->getDepartmentName() << "\t";
    cout << "职责：" << "完成老板交给的任务，并下发任务给员工" << endl;
}

Manager::~Manager()
{
    cout << "经理类析构函数" << endl;
}
