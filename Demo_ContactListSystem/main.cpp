#include <iostream>
using namespace std;

#define MAX 1000 // 最大人数

// 联系人结构体
struct Person
{
  string name;    // 姓名
  bool gender;    // 性别 0 男 1 女
  int age;        // 年龄
  string number;  // 电话号码
  string address; // 地址
};

// 通讯录结构体
struct ContactBooks
{
  struct Person personArray[MAX]; // 通讯录保存的联系人数组
  int m_Size;                     // 通讯录中人员个数
};

/**
 *  显示菜单 
 */
void showSysMenu()
{
  cout << "***************************************" << endl;
  cout << "****         通讯录管理系统        ***" << endl;
  cout << "***************************************" << endl;
  cout << "*****        1. 添加联系人        *****" << endl;
  cout << "*****        2. 查看联系人        *****" << endl;
  cout << "*****        3. 删除联系人        *****" << endl;
  cout << "*****        4. 查找联系人        *****" << endl;
  cout << "*****        5. 修改联系人        *****" << endl;
  cout << "*****        6. 清空联系人        *****" << endl;
  cout << "*****        0. 退出系统          *****" << endl;
  cout << "***************************************" << endl;
}

/**
 * 显示联系人
 */
void showContacts(ContactBooks *p)
{

  if (p->m_Size == 0)
  {
    cout << "当前通讯录列表为空" << endl;
  }
  int i = 0;
  while (i < p->m_Size)
  {
    Person person = p->personArray[i];
    cout << person.name;
    cout << "\t" << person.age;
    cout << '\t' << (person.gender ? "男" : "女");
    cout << "\t" << person.number;
    cout << "\t" << person.address << endl;
    i++;
  }
  // MAC 环境下替代 system("pause")，控制台暂停
  cout << "按 ENTER 键继续..." << endl;
  system("read");
  system("clear");
}

/**
 * 添加联系人
 */
void addContact(ContactBooks *b)
{
  cout << "添加联系人" << endl;
  if (b->m_Size >= MAX)
  {
    cout << "通讯录已满" << endl;
  }
  else
  {
    // 输入姓名
    string name = "";
    cout << "请输入联系人姓名：";
    cin >> name;
    b->personArray[b->m_Size].name = name;

    // 输入性别
    while (true)
    {
      int gender = false;
      cout << "输入性别 (1 - 男；2 - 女) ：";
      cin >> gender;

      if (gender == 1 || gender == 2)
      {
        b->personArray[b->m_Size].gender = true;
        break;
      }
      else
      {
        cout << "输入不合法，请输入数字1或数字2 " << endl;
        continue;
      }
    }

    // 输入年龄
    while (true)
    {
      int age = 0;
      cout << "输入联系人年龄: ";
      cin >> age;
      if (age < 0 || age > 150)
      {
        cout << "年龄不合法，请确保年龄在 1-150之间!!!" << endl;
        continue;
      }
      else
      {
        b->personArray[b->m_Size].age = age;
        break;
      }
    }

    // 输入电话号码
    string phone = "";
    cout << "输入电话号码：";
    cin >> phone;
    b->personArray[b->m_Size].number = phone;

    // 输入地址
    string addr = "";
    cout << "输入地址：";
    cin >> addr;
    b->personArray[b->m_Size].address = addr;

    // 让通讯录数量 + 1
    b->m_Size++;
    cout << "用户信息添加成功!!!" << endl;
  }

  cout << "按 ENTER 键回到主菜单" << endl;
  system("read");
  system("clear");
}

/**
 * 检测通讯录是否存在该姓名的用户，存在 返回 在通讯录中的索引，不存在返回 -1
 */
int isPersonExist(ContactBooks *b, string name)
{
  int i = 0;
  while (i < b->m_Size)
  {
    Person person = b->personArray[i];
    if (person.name == name)
    {
      return i;
    }
    i++;
  }
  return -1;
}

/**
 * 根据 姓名 删除联系人
 */
void deleteContact(ContactBooks *b)
{
  cout << "删除联系人" << endl;
  string name = "";
  cout << "请输入需要删除联系人的名字：";
  cin >> name;

  int idx = isPersonExist(b, name);

  if (idx == -1)
  {
    cout << "通讯录中没有找到 「" << name << "」 这个联系人" << endl;
  }
  else
  {
    // cout << "执行删除通讯录中索引为" << idx << "的联系人" << endl;

    // 通讯录中从找到该联系人的索引位置，后面的联系人依次前移一位
    // 最后将通讯录的人数减1
    for (int i = idx; i < b->m_Size; i++)
    {
      // 依此前移一位
      b->personArray[i] = b->personArray[i + 1];
    }
    // 联系人数目减1
    b->m_Size--;

    cout << "删除联系人 「" << name << "」 成功" << endl;
  }
  cout << "按 ENTER 键回到主菜单" << endl;
  system("read");
  system("clear");
}

/**
 * 查找联系人
 */
void findContact(ContactBooks *b)
{
  cout << "查找联系人" << endl;
  string name = "";
  cout << "请输入需要查找联系人的名字：";
  cin >> name;

  // 查找是否存在该联系人
  int idx = isPersonExist(b, name);

  if (idx == -1)
  {
    cout << "通讯录中没有找到 「" << name << "」 这个联系人" << endl;
  }
  else
  {
    Person person = b->personArray[idx];
    if (person.name == name)
    {
      cout << "找到了联系人 「" << name << "」" << endl;
      cout << "\t" << person.name
           << "\t" << person.age
           << "\t" << (person.gender ? "男" : "女")
           << "\t" << person.number
           << "\t" << person.address << endl;
    }
  }
  cout << "按 ENTER 键回到主菜单" << endl;
  system("read");
  system("clear");
}

/**
 * 修改联系人信息
 */
void updateContact(ContactBooks *b)
{
  cout << "修改联系人" << endl;
  string name = "";
  cout << "请输入需要修改的联系人姓名：";
  cin >> name;

  int idx = isPersonExist(b, name);

  if (idx == -1)
  {
    cout << "通讯录中没有找到 「" << name << "」 这个联系人" << endl;
  }
  else
  {
    Person person = b->personArray[idx];

    // 打印查询到的信息
    cout << "查询到的信息：" << endl;
    cout << "\t";
    cout << person.name << "\t";
    cout << person.age << "\t";
    cout << (person.gender ? "男" : "女") << "\t";
    cout << person.number << "\t";
    cout << person.address << endl;

    // 每次询问的操作
    char op = 'N'; // Y yes N no
    // 修改姓名
    cout << "是否要修改姓名（Y/N）:";
    cin >> op;
    if (op == 'Y' || op == 'y')
    {
      string newName = "";
      cout << "请输入修改后的名字：";
      cin >> newName;
      person.name = newName;
    }

    // 修改性别
    cout << "是否要修改性别（Y/N）:";
    char isOrNo = 'N';
    cin >> isOrNo;
    if (isOrNo == 'Y' || op == 'y')
    {
      person.gender = !person.gender;
    }

    // 修改年龄
    cout << "是否修改年龄（Y/N）:";
    cin >> op;
    if (op == 'Y' || op == 'y')
    {
      int age = 0;
      while (true)
      {
        cout << "输入修改后的年龄：";
        cin >> age;

        if (age > 0 && age < 150)
        {
          person.age = age;
          break;
        }
        else
        {
          cout << "输入不合法!!!" << endl;
        }
      }
    }

    // 修改电话号码
    cout << "需要修改电话号码吗（Y/N）:";
    cin >> op;
    if (op == 'Y' || op == 'y')
    {
      string phone = "";
      cout << "请输入修改后的电话号码: ";
      cin >> phone;
      if (phone != "")
      {
        person.number = phone;
      }
    }

    // 修改地址
    cout << "需要修改联系人地址吗（Y/N）:";
    cin >> op;
    if (op == 'Y' || op == 'y')
    {
      string addr = "";
      cout << "请输入修改后的地址 ";
      cin >> addr;
      person.address = addr;
    }


    // 将联系人列表的用户修改为当前修改后的用户
    b->personArray[idx] = person;
    cout << "修改联系人成功!!!" << endl;
    // cout << "\t";
    // cout << person.name << "\t";
    // cout << person.age << "\t";
    // cout << (person.gender ? "男" : "女") << "\t";
    // cout << person.number << "\t";
    // cout << person.address << endl;
  }
  cout << "按 ENTER 键回到主菜单" << endl;
  system("read");
  system("clear");
}

/**
 * 清空联系人
 * 
 * 逻辑删除即可
 */
void removeAllContacts(ContactBooks *b)
{
  cout << "清空联系人" << endl;

  char op = 'N';
  cout << "确认清空该通讯录? （Y/N）：";
  cin >> op;
  if (op == 'Y' || op == 'y')
  {
    // 所有联系人清空
    // for (int i = 0; i < b->m_Size; i++)
    // {

    //   b->personArray[i].name = "";
    //   b->personArray[i].age = 0;
    //   b->personArray[i].gender = false;
    //   b->personArray[i].number = "";
    //   b->personArray[i].address = "";
    // }
    // 人数置空
    b->m_Size = 0;
    cout << "通讯录已被清空!!!" << endl;
  }
  else
  {
    cout << "取消清空通讯录" << endl;
  }

  cout << "按 ENTER 键回到主菜单" << endl;
  system("read");
  system("clear");
}

/**
 * 添加测试数据
 */
void addTestData(ContactBooks *b)
{
  Person p1;
  p1.name = "张三";
  p1.gender = true;
  p1.age = 24;
  p1.number = "18709877890";
  p1.address = "中国四川";
  Person p2 = {"李四", true, 23, "19988889999", "成都市金牛区"};
  Person p3 = {"王五", false, 22, "18899990000", "成都市成华区"};
  Person p4 = {"赵六", true, 23, "13989897878", "成都市金牛区"};

  b->personArray[0] = p1;
  b->personArray[1] = p2;
  b->personArray[2] = p3;
  b->personArray[3] = p4;
  b->m_Size = 4;
}

int main()
{
  // 通讯录实例
  ContactBooks books;
  books.m_Size = 0; // 初始化通讯录中的记录数

  // 使用测试数据
  addTestData(&books);

  // 记录用户选择
  int number = 0;

  while (true)
  {
    // 2. 显示菜单
    showSysMenu();

    cout << "请输入命令： ";
    cin >> number;

    switch (number)
    {
    case 1:
      addContact(&books);
      break;
    case 2:
      showContacts(&books);
      break;
    case 3:
      deleteContact(&books);
      break;
    case 4:
      findContact(&books);
      break;
    case 5:
      updateContact(&books);
      break;
    case 6:
      removeAllContacts(&books);
      break;
    case 0:
      cout << "欢迎使用该通讯录管理系统" << endl;
      return 0;
    default:
      cout << "输入命令不合法！！！" << endl;
      cout << "按 ENTER 键继续" << endl;
      system("read");
      system("clear");
      continue;
    }
  }

  return 0;
}
