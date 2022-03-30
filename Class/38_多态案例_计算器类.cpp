#include <iostream>
using namespace std;


// 普通方式实现两个数的运算
class Calculator
{
  public:
  Calculator(double num1, double num2)
  {
    m_num1 = num1;
    m_num2 = num2;
  }
    double getResult(string op)
    {
      if(op == "+")
      {
        return m_num1 + m_num1;
      }else if(op == "-")
      {
        return m_num1 - m_num2;
      }
      else if (op == "*")
      {
        return m_num1 * m_num2;
      }else if(op == "/")
      {
        if(m_num2 != 0)
        {
          return m_num1 / m_num2;
        }else{
          cout << "除数不能为0" << endl;
          return 0;
        }
      }else{
        cout << "运算符只能为 （+、-、*、/）";
        return 0;
      }
      // 如果在开发过程中，需要扩展新功能，就需要修改源码
      // 开闭原则： 对扩展进行开放，对修改进行关闭
    }
    double m_num1;
    double m_num2;
};


void test1()
{
  cout << "普通类实现" << endl;
  Calculator cal(10, 2);
  cout << "+  : " << cal.getResult("+") << endl;
  cout << "-  : " << cal.getResult("-") << endl;
  cout << "*  : " << cal.getResult("*") << endl;
  cout << "/  : " << cal.getResult("/") << endl;
}

// ----------------------利用多态实现计算器

// 计算器抽象类
class AbstractCalculator{
  public:
    double m_num1;
    double m_num2;
    virtual double getResult()
    {
      return 0;
    }
};

// 加法计算器类
class AddCalculator:public AbstractCalculator
{
  double getResult()
  {
    return m_num1 + m_num2;
  }
};

// 减法计算器类
class MinusCalculator:public AbstractCalculator
{
  double getResult()
  {
    return m_num1 - m_num2;
  }
};

// 乘法法计算器类
class MultiplelicationCalculator:public AbstractCalculator
{
  double getResult()
  {
    return m_num1 * m_num2;
  }
};

// 除法法计算器类
class DivisionCalculator:public AbstractCalculator
{
  double getResult()
  {
    return m_num2 != 0 ? m_num1 / m_num2 : 0;
  }
};



void test2()
{
  cout << "利用多态实现" << endl;
  // 多态使用条件 父类指针/引用 指向子类对象

  // 加法
  AbstractCalculator *abc = new AddCalculator;
  abc->m_num1 = 10;
  abc->m_num2 = 2;
  cout << abc->m_num1 << " + " << abc->m_num2 << " = " <<  abc->getResult() << endl;
  // 用完记得释放堆区数据
  delete abc;

  // 减法
  abc = new MinusCalculator;
  abc->m_num1 = 10;
  abc->m_num2 = 2;
  cout << abc->m_num1 << " - " << abc->m_num2 << " = " <<  abc->getResult() << endl;
  delete abc;

   // 乘法
  abc = new MultiplelicationCalculator;
  abc->m_num1 = 10;
  abc->m_num2 = 2;
  cout << abc->m_num1 << " * " << abc->m_num2 << " = " <<  abc->getResult() << endl;
  delete abc;

  // 除法
  abc = new DivisionCalculator;
  abc->m_num1 = 10;
  abc->m_num2 = 2;
  cout << abc->m_num1 << " / " << abc->m_num2 << " = " <<  abc->getResult() << endl;
  delete abc;
}

int main()
{
  test1();
  test2();
  return 0;
}