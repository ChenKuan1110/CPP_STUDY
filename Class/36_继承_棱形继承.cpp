#include <iostream>
using namespace std;


// 动物类
class Animal
{
  public:
    int m_age; // 年龄
};

// 羊
class Sheep: virtual public Animal
{
};


// 解决方案
// 继承之前加上关键字 virture
// 此时 Animal 称为 虚基类
// 骆驼
class Camel: virtual public Animal
{
};

// 羊驼
class Alpaca: public Sheep, public Camel
{
};

void test()
{
  Alpaca al;
  // al.m_age = 1;// 出现二义性
  al.Sheep::m_age = 1;
  al.Camel::m_age = 2;

  // 我们只需要一份，但是当前保存有两份数据，而且容易造成二义性
  cout << "al.Sheep::m_age = " << al.Sheep::m_age << endl;
  cout << "al.Camel::m_age = " << al.Camel::m_age << endl;
  // 使用虚继承后，可以直接访问
  cout << "al.m_age = " << al.m_age << endl;
}

int main()
{
  test();
  return 0;
}