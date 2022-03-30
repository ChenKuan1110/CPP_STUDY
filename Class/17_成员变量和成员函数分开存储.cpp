# include <iostream>

using namespace std;

class Person
{
  public:
    Person()
    {
      mA = 0;
    }

    // 非静态成员变量占用对象空间
    int mA;
    // 静态成员变量不占用对象空间
    static int mB;
    // 函数也不占用对象空间，所有函数共享一个函数实例
    void func()
    {
      cout << "mA:" << this->mA << endl;
    }
};

void test()
{
  Person p;
  // 空对象 sizeof() = 1
  // C++ 会为每个空对象分配一个字节的空间，是为了区分空对象占内存中的位置
  cout << "sizeof(p) = " << sizeof(p) << endl;
}

int main()
{
  test();
  return 0;
}