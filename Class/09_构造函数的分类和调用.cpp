#include <iostream>

using namespace std;
#include <string>


// 分类
// 按参数 ： 有参构造 无参构造
// 按类型 ： 普通构造 拷贝构造
class Person
{
public:
  Person()
  {
    cout << "Person 类无参构造函数调用" << endl;
  }
  Person(string name)
  {
    cout << "Person 类有参构造函数调用" << endl;
    s_name = name;
  }
  // 拷贝构造
  Person(const Person &p)
  {
    cout << "Person 类拷贝构造函数调用" << endl;
    s_name = p.s_name;
  }
  ~Person()
  {
    cout << "Person 类析构函数被调用" << endl;
  }
  string s_name;
};


void test()
{
  // 调用
  // 方式1 括号法
  // Person p1; // 默认构造函数被调用
  // cout << p1.s_name << endl;
  // Person p2("张三"); // 
  // cout << p2.s_name << endl;
  
  // Person p3(p2); // 拷贝构造函数被调用
  // cout << p3.s_name << endl;

  // NOTE: 调用默认构造函数的时候，不要加()
  //编译器会认为这是一个函数声明
  // const p4();

  // 方式2 显示法
  // Person p5; // 无参构造
  // Person p6 = Person("李四"); // 有参构造
  // Person p7 = Person(p6); // 拷贝构造

  // Person("李四"); // 匿名对象： 特点：当前行执行结束后，系统会立即回收掉匿名对象
  // cout << "aaa" << endl;

  // NOTE2: 不要利用拷贝构造函数初始化匿名对象
  // Person(p7); // 编译器会认为 Person(p7) === Person p7;



  // 方式3 隐式转换法
  string str = "王五";
  Person p8 = str; // 相当于 Person p8 = Person(str)
  Person p9 = p8; // 隐式拷贝构造
}

int main()
{
  test();

  return 0;
}