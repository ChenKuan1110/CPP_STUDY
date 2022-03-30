#include <iostream>
using namespace std;


class Person
{
  public:
    int m_age;
    Person(int age)
    {
      m_age = age;
    }
    bool operator==(Person & p)
    {
      return p.m_age == this->m_age;
    }

    bool operator>(Person &p)
    {
      return this->m_age > p.m_age;
    }

    bool operator<(Person &p)
    {
      return this->m_age < p.m_age;
    }

    // !=
    bool operator!=(Person &p)
    {
      return this->m_age != p.m_age;
    }
    // ...
};

void test()
{
  Person p1(18);
  Person p2(20);
  if(p1 == p2)
  {
    cout << "p1 和 p2 年龄一样" << endl;
  }
  else if(p1 > p2)
  {
    cout << "p1 比 p2 年龄大" << endl;
  }
  else
  {
    cout << "p1 比 p2 年龄小" << endl;
  }
}

int main()
{
  test();
  return 0;
}