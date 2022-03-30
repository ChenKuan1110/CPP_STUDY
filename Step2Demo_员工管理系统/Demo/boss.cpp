#include "boss.h"

Boss::Boss(int id, string name,int dId)
{
    this->m_id = id;
    this->m_name = name;
    this->m_departmentId = dId;
}


void Boss::showInfo()
{
    cout << "职工编号：" << m_id << "\t";
    cout << "职工姓名：" << m_name << "\t";
    cout << "岗位：" << this->getDepartmentName() << "\t";
    cout << "职责：" << "管理公司中的所有事务" << endl;
}

string Boss::getDepartmentName()
{
    return string("老板");
}

Boss::~Boss()
{
    cout << "老板类析构函数" << endl;
}
