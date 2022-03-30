#include "employee.h"

Employee::Employee(int id, string name, int dId)
{
    this->m_id = id;
    this->m_name = name;
    this->m_departmentId = dId;
}

string Employee::getDepartmentName()
{
    return string("员工");
}

void Employee::showInfo()
{
    cout << "职工编号：" << m_id << "\t";
    cout << "职工姓名：" << m_name << "\t";
    cout << "岗位：" << this->getDepartmentName() << "\t";
    cout << "职责：" << "完成经理交给的任务" << endl;
}

Employee::~Employee()
{
    cout << "普通职工析构函数" << endl;
}
