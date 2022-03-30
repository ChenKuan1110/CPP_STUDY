#include <iostream>
using namespace std;

class Person
{
  private:
    int m_A;
    int m_B;
  public:
    Person(){}
    Person(int a, int b)
    {
      m_A = a;
      m_B = b;
    }

    // 通过成员函数来重载 +
    Person operator+ (Person &p)
    {
      Person p1;
      p1.m_A = p.m_A + this->m_A;
      p1.m_B = p.m_B + this->m_B;
      return p1;
    }

    // 运算符重载函数也能发生重载
    Person operator+ (int num)
    {
      Person p1;
      p1.m_A = this->m_A + num;
      p1.m_B = this->m_B + num;
      return p1;
    }

    void showInfo()
    {
      cout << this->m_A << " "  << this->m_B << endl;
    }
};

void test(){
  Person p1(10,20);
  Person p2(20, 30);
  // 成员函数运算符本质
  // Person p3 = p1.operator+(p2);
  Person p3 = p1 + p2;
  p3.showInfo();
}

void test1()
{
  Person p1(10, 20);
  Person p2 = p1 + 10;
  p2.showInfo();
}

// 全局函数 的运算符重载
// Person operator + (Person &a, Person &b){
//   Person p3;
//   p3.m_A = 
// }

int main()
{
  test();
  cout << "--------" << endl;
  test1();
  return 0;
}