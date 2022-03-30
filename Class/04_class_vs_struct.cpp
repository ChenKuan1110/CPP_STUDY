#include <iostream>

using namespace std;

class C1 
{
  int m_A; // 默认是私有权限
};

struct C2
{
  int m_A; // 默认是公开权限
};


int main()
{
  C1 c1;
  // c1.m_A // (Inaccessible)

  C2 c2;
  c2.m_A = 123;

  return 0;
}