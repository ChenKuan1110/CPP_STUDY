#include "workermanager.h"


WorkerManager::WorkerManager()
{
    // 判断文件是否存在
    ifstream ifs;
    ifs.open(FILE_NAME, ios::in);

    if(!ifs.is_open()) // 文件不存在
    {
        cout << "文件不存在" << endl;
        // 初始化属性
        this->m_empNum = 0; // 职工数量
        this->m_empArray = NULL;
        this->m_fileIsEmpty = true;
        ifs.close();
        return;
    }

    // 文件存在
    // 打开文件，读取内容，初始化数据
    // 通过读取一个字符，来判断是否是文件尾部标识来判断是否文件为空的情况
    char ch;
    ifs >> ch;
    if(ifs.eof()) // 文件为空的情况
    {
        cout << "文件为空" << endl;
        this->m_empArray = NULL;
        this->m_empNum = 0;
        this->m_fileIsEmpty = true;
        // 关闭文件
        ifs.close();
        return;
    }


    // 文件存在且不为空的情况
    int num = this->getEmpNum(); // 获取文件中的数量
    // 设置人数
    this->m_empNum = num;
    // 初始化职工指针数组
    this->m_empArray = new Worker*[num];
    // 初始化人员
    this->initEmp();
    this->m_fileIsEmpty=false;
}


int WorkerManager::getEmpNum()
{
    ifstream ifs;
    ifs.open(FILE_NAME, ios::in);

    int id = 0;
    string name = "";
    int mId = 0;

    int num = 0;
    while(ifs >> id && ifs >> name && ifs >> mId)
    {
        num ++;
    }
    return num;
}

void WorkerManager::initEmp()
{
    ifstream ifs;
    ifs.open(FILE_NAME, ios::in);

    int id = 0;
    string name = "";
    int mId = 0;
    int i=0;// 序号

    while(ifs >> id && ifs >> name && ifs >> mId)
    {
        Worker * work_p = NULL;
        switch(mId)
        {
            // 构造职工对象
        case 1:
            work_p = new Employee(id, name, mId);
            break;
        case 2:
            work_p = new Manager(id,name,mId);
            break;
        case 3:
            work_p = new Boss(id, name, mId);
            break;
        default:
            break;
        }
        // 将对象指针设置到指针数组中
        this->m_empArray[i] = work_p;
        i++;
    }
    // 关闭文件
    ifs.close();
}


void WorkerManager::showMenu()
{
//    cout << "显示菜单" << endl;
    cout << "******************************************" << endl;
    cout << "**************  职工管理系统  **************" << endl;
    cout << "******************************************" << endl;
    cout << "*****          0.退出管理系统          *****" << endl;
    cout << "*****          1.增加职工信息          *****" << endl;
    cout << "*****          2.显示职工信息          *****" << endl;
    cout << "*****          3.删除离职职工          *****" << endl;
    cout << "*****          4.修改职工信息          *****" << endl;
    cout << "*****          5.查询职工信息          *****" << endl;
    cout << "*****          6.按照编号排序          *****" << endl;
    cout << "*****          7.清空所有文档          *****" << endl;
    cout << "******************************************" << endl;

}


void WorkerManager::exitSystem()
{
    cout << "欢迎再次使用职工管理系统" << endl;
    exit(0);
}


void WorkerManager::addEmployee()
{
    cout << "请输入要添加的员工个数：";
    int num = 0;
    cin >> num;

    if(num <= 0)
    {
        cout << "添加人数输入有误" << endl;
        this->helperFunc();
        return;
    }

    // 获取新的员工数量
    int newNum = this->m_empNum + num;
    // 在堆区创建一个新的职工数组用来存放原来的职工数组和要新添加的职工数组
    Worker** newArray = new Worker*[newNum];

    // 将原有的职工数组中的数据放到新创建的职工数组中
    for(int i=0;i<this->m_empNum;i++)
    {
        newArray[i] = this->m_empArray[i]; // 将原有的职工数组中的指针赋给新职工数组
    }
    int time = 0; // 记录当前输入是第几个人
    // 新增
    while(time<num)
    {
        cout << "请输入第"<< time+1 <<"位职工编号：";
        int id = 0;
        cin >> id;

        // 判断id存在不
        if(this->isIdExist(id)){
            cout << "该编号已经有职员信息了，请换一个编号" << endl;
            continue;
        }

        cout << "请输入第"<< time+1 <<"位员工姓名：";
        string name = "";
        cin >> name;

        cout << "请输入第"<< time+1 <<"位职工岗位数字(1 -普通职员 2 -经理 3 -老板)：";
        int mId = 0;
        cin >> mId;

        Worker * worker = NULL;


        // 根据职工岗位创建不同类型的职员
        switch (mId)
        {
        case 1:// 普通职员
            worker = new Employee(id, name, mId);
            break;
        case 2: // 经理
            worker = new Manager(id, name, mId);
            break;
        case 3: // 老板
            worker = new Boss(id, name, mId);
            break;
        default:
            cout << "输入职员岗位有误" << endl;
            break;
        }

        if(worker == NULL)
        {
            continue;
        }
        newArray[time + this->m_empNum] = worker; // 将新创建对象赋值给新职工数组中的后续位
//        cout << "第"<< time <<"位添加成功"<< endl;
        time++;
    }
    // 释放原有职工数组空间(NOTE)
    delete [] this->m_empArray;

    // 将新的职工指针数组赋予给原有职工指针数组
    this->m_empArray = newArray;

    // 将职工数量 修改为 最新值
    this->m_empNum = newNum;

    // 提示用户
    cout << "成功添加" << num << "名新职工" << endl;

    // 修改文件不为空标志
    this->m_fileIsEmpty = false;

    // 保存到文件
    this->save();

    this->helperFunc();
}

void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILE_NAME, ios::out);

//    cout << ofs.is_open() << endl;

    // 写数据
    for(int i=0;i<this->m_empNum;i++)
    {
//        cout << "保存第"<< i << "个用户" << endl;
        // TODO:考虑 csv 文件兼容
        ofs << this->m_empArray[i]->m_id << " "
           << this->m_empArray[i]->m_name << " "
           << this->m_empArray[i]->m_departmentId << endl;
    }
    ofs.close();
}

void WorkerManager::showEmployee()
{
    if(this->m_fileIsEmpty)
    {
        cout << "没有职工数据"<< endl;
    }
    else
    {
        // 输入提示人数
        cout << "当前系统中有 " << this->m_empNum << " 位职工"<< endl;

        for(int i=0;i<this->m_empNum;i++)
        {
            // 调用 职工的showInfo函数
            // 利用多态调用接口
            this->m_empArray[i]->showInfo();
        }
    }

    this->helperFunc();
}


void WorkerManager::deleteEmp()
{
    if(this->m_fileIsEmpty)
    {
        cout << "当前没有职工数据"<< endl;
        this->helperFunc();
        return ;
    }
    cout << "请输入你要删除的员工id：";
    int deleteId = 0;
    cin >> deleteId;
    if(deleteId > 0)
    {
        int idx = this->isEmpExist(deleteId);
        if(idx == -1){
            cout << "没有职工id为 " << deleteId << " 的职工" << endl;
        }
        else
        {
            // TODO:清除掉该员工指针数组中该索引中的数据
            // 从该索引之后的数据依次向前移动一位
            for(int i=idx;i<this->m_empNum-1;i++)
            {
                this->m_empArray[i] = this->m_empArray[i+1];
            }
            // 更新数量
            this->m_empNum --;

            // 同步到文件
            this->save();
            cout << "已成功删除掉用户编号为 " << deleteId << " 的职工数据" <<  endl;

        }

    }
    else
    {
        cout << "您的输入有误！！！" << endl;
    }

    this->helperFunc();

}


int WorkerManager::isEmpExist(int id){
    for(int i=0;i<this->m_empNum;i++)
    {
        if(id == this->m_empArray[i]->m_id)
        {
            return i;
        }
    }
    return -1;
}

void WorkerManager::modifyEmp()
{
    cout << "请输入需要修改员工的编号：";
    int id = 0;
    cin >> id;
    if(id>0)
    {
        int idx = this->isEmpExist(id);
        if(idx == -1)
        {
            cout << "系统中没有用户编号为 " << id << " 的职工信息" << endl;
            this->helperFunc();
        }
        else
        {
            string new_name = "";
            int new_mId = 0;
            cout << "请输入修改后的职工姓名:";
            cin >> new_name;
            cout << "请输入修改后的职位（1 - 普通职工   2- 经理  3 - 老板）：";
            cin >> new_mId;

            // 删除原有职工信息
            // TOFIX: 程序执行到此崩溃
//            delete this->m_empArray[idx];

            Worker * newWorker = NULL;
            if(new_mId == 1)
            {
                newWorker = new Employee(id, new_name, 1);
            }
            else if(new_mId == 2)
            {
                newWorker = new Manager(id, new_name, 2);
            }
            else if(new_mId == 3)
            {
                newWorker = new Boss(id, new_name, 3);
            }
            // 更新职工信息
            this->m_empArray[idx] = newWorker;
            cout << "职工信息更新成功"<< endl;
            // 保存
            this->save();
        }
    }
    else
    {
        cout << "请输入合法的员工编号";
    }
    this->helperFunc();

}

void WorkerManager::findEmp()
{
    if(this->m_fileIsEmpty)
    {
        cout << "职工信息为空！" << endl;
    }
    else
    {
        cout << "请输入查找方式（1 - 按编号查找 2 - 按职工姓名查找）: ";
        int choise = 0;
        cin >> choise;

        if(choise == 1) // 按编号查找
        {
            cout << "请输入职员编号：";
            int id = 0;
            cin >> id;

            int idx = this->isEmpExist(id);

            if(idx == -1)
            {
                cout << "没有找到职员编号为 " << id << " 的职工信息" << endl;
            }
            else
            {
                cout << "查找成功，职工编号为 " << id << "的信息如下："<< endl;
                this->m_empArray[idx]->showInfo();
            }
        }
        else if(choise == 2) // 按职工姓名查找
        {
            cout << "请输入职工姓名 :";
            string name = "";
            cin >> name;

            bool findFlag = false;
            for(int i=0;i<this->m_empNum;i++)
            {
                if(this->m_empArray[i]->m_name == name)
                {
                    findFlag = true;
                    cout << "查找成功，职工编号为 "
                         << this->m_empArray[i]->m_id
                         << "的信息如下：" << endl;
                    this->m_empArray[i]->showInfo();
                }
            }
            if(!findFlag)
            {
                cout << "系统中没有姓名为 " << name << " 的职工信息"<< endl;
            }
        }
        else
        {
            cout << "输入有误！"<< endl;
        }

    }
    this->helperFunc();
}


void WorkerManager::sortEmp()
{
    if(this->m_fileIsEmpty)
    {
        cout << "当前系统中职工数为0"<< endl;
        this->helperFunc();
    }
    else
    {
        cout << "请输入排序规则(1 - 升序排列 2 - 降序排列): ";
        int choise = 0;
        cin >> choise;
        if(choise == 1) // 升序
        {
            for(int i=0;i<this->m_empNum -1;i++)
            {
                for(int j=i+1;j<this->m_empNum;j++)
                {
                    if(this->m_empArray[j]->m_id < this->m_empArray[i]->m_id)
                    {
                        Worker * tmp = this->m_empArray[j];
                        this->m_empArray[j] = this->m_empArray[i];
                        this->m_empArray[i] = tmp;
                    }
                }
            }
            // 保存文件
            this->save();
            this->showEmployee();
        }
        else if(choise == 2) // 降序
        {
            for(int i=0;i<this->m_empNum -1;i++)
            {
                for(int j=i+1;j<this->m_empNum;j++)
                {
                    if(this->m_empArray[j]->m_id > this->m_empArray[i]->m_id)
                    {
                        Worker * tmp = this->m_empArray[j];
                        this->m_empArray[j] = this->m_empArray[i];
                        this->m_empArray[i] = tmp;
                    }
                }
            }
            // 保存文件
            this->save();
            this->showEmployee();
        }
        else
        {
            cout << "输入有误！" << endl;
            this->helperFunc();
        }
    }
}

void WorkerManager::clearFile()
{
   if(this->m_fileIsEmpty)
   {
       cout << "当前系统中职员信息已经为空！"<< endl;
   }
   else
   {
       cout << "请确保您要清空该系统，输入 YES 来确认：";
       string command = "";
       cin >> command;

       if(command == "YES")
       {
           // 清空堆上保存的用户信息
           delete [] this->m_empArray;
           // 人数置0
           this->m_empNum = 0;
           // 文件不存在标识为空
           this->m_fileIsEmpty = true;
           cout << "职员信息已清空"<< endl;
           this->save();
       }
       else
       {
           cout << "输入有误！" << endl;
       }
   }
   this->helperFunc();
}


WorkerManager::~WorkerManager()
{
    if(this->m_empArray != NULL)
    {
        for(int i=0;i<this->m_empNum;i++)
        {
            if(this->m_empArray[i] != NULL)
            {
                delete  this->m_empArray[i];
                this->m_empArray[i] = NULL;
            }
        }
    }
    delete [] this->m_empArray;
    this->m_empArray = NULL;
}

bool WorkerManager::isIdExist(int id)
{
    for(int i=0;i<this->m_empNum;i++)
    {
        if(id == this->m_empArray[i]->m_id)
        {
            return true;
        }
    }
    return false;
}

void WorkerManager::helperFunc()
{
    cout << "按 <RETURN>  继续..."<< endl;
    system("read");
    system("clear");
}
