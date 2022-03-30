#include <iostream>
using namespace std;

// 虚析构与纯虚析构

class Animal{
  public:
    Animal()
    {
      cout << "Animal 抽象类 构造" << endl;
    }
    // 利用虚析构可解决父类和子类析构函数不调用的情况
    // virtual ~Animal()
    // {
    //   cout << "Animal 抽象类虚析构函数" << endl;
    // }

    // 纯虚析构函数也可以解决父类和子类构造函数不会调用的情况
    // 纯虚析构函数需要定义，也需要实现
    // 有了纯虚析构函数之后，该类也是抽象类
    virtual ~Animal() = 0;
    virtual void speak() = 0;
};

// 纯虚析构函数实现
Animal::~Animal()
{
  cout << "Animal 纯虚析构函数被调用" << endl;
}

class Cat : public Animal
{
  public :
    Cat(string name)
    {
      cout << "Cat 构造函数调用" << endl;
      this->name = new string(name);
    }
    ~Cat()
    {
      // 在此释放 在堆区开辟的空间
      cout << "Cat 类析构" << endl;
      if(name != NULL)
      {
        delete name;
        name = NULL;
      }
    }
    void speak(){
        cout << "小猫" << *this->name << "在说话" << endl;
    }
    string *name;
};

void test()
{
  Animal * animal = new Cat("Amy");
  animal->speak();
  delete animal;
}

int main()
{
  test();
  return 0;
}