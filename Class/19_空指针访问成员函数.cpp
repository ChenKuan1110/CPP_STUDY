#include <iostream>

using namespace std;

// 空指针调用成员函数

class Person
{
  private:
    string name;
    int age;
    mutable double money;

  public:
    int m_A;
    mutable int m_B;

  public:
    Person ()
    {

    }
    // this 指针的本质是 指针常量 ，指向是不可以修改的
    // const Person * const this 
    // 在成员函数后面 加上 const 关键字，修饰的是 this指向， 让 this 指针的指向也不能修改
    void showInfo () const
    {
      // age += 100; // 不可修改
      // 👆代码的本质为： this->age = 100

      // 常函数可以修改 加了 mutable 声明的成员变量
      money += 100;
    }
    void printAge()
    {
      cout << "年龄是： " << this->age << endl;
    }
};

void test()
{
  Person p;
  p.showInfo();
}

void test1()
{
  const Person p; // 对象p为常对象

  // 常对象 不能修改成员属性
  // p.m_A = 100;
  p.m_B = 200; // 常对象可以修改 mutable 修饰的成员变量

  p.showInfo(); // 可修改常函数
  //p.printAge(); 常对象不能调用其他函数，只能调用常函数 应为普通成员函数可以修改成员变量
}

int main()
{
  test();
  return 0;
}