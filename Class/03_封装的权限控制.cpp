#include <iostream>

using namespace std;

// 封装 访问的控制权限
/**
*  `public` 公关权限  类中可以访问，类外也可以访问
* `protected` 保护权限 类内可以访问 类外不能访问 儿子也可以访问父亲中保护的内容
* `private` 私有权限 类内可以访问 类外不能访问  儿子也不能够访问
*/

class Person
{
  public:
    string m_Name; // 姓名

  protected:
    string m_Car; // 汽车

  private:
    int m_Password; // 银行卡密码


  public:
    void func()
    {
      m_Name = "张三";
      m_Car = "拖拉机";
      m_Password = 123456;
    }
};

int main()
{
  Person p1;
  p1.m_Name = "李四";
  // p1.m_Car = "奔驰";  (Inaccessible)
  // p1.m_Password = 123465 (Inaccessible)

      return 0;
}