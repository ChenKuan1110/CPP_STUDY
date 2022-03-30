#include <iostream>

using namespace std;

// 类模版与继承

template <class T>
class Base
{
  T m;
};

// 需要指定父类模版的类型
// class Son: public Base{};
class Son: public Base<int>
{
};

// 如果需要让子类也变得更灵活，可以让子类使用类模版
template<class T>
class Son2: public Base <T>
{
};

void test1()
{
  Son s1;
}

void test2()
{
  Son2<int> s2;
}

int main()
{
  test1();
  test2();
  return 0;
}