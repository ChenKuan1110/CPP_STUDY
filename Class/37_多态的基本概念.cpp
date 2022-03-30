#include <iostream>

using namespace std;

// 多态的概念

class Animal
{
  public:
    // 加上 virtual 关键字，表示该函数是虚函数，在执行阶段才绑定函数地址
    virtual void speak()
    {
      cout << "动物在说话" << endl;
    }
};

class Cat : public Animal
{
  public:
    // 函数重写 ： 函数名相同，参数相同，返回值相同
    void speak()
    {
      cout << "小猫在说话" << endl;
    }
};

class Dog : public Animal
{
  public:
    // 重写基类中的虚函数
    void speak()
    {
      cout << "小狗在说话" << endl;
    }
};


// 执行说话的函数
// 地址早绑定，在编译阶段函数的地址就绑定好了，所以调用的时候直接是访问父类中的 speak() 函数
// 如果想要执行让猫说话，那么这个函数的地址就不能先绑定，需要到执行阶段再绑定
void doSpeak(Animal & a)
{
  a.speak();
}

void test()
{
  Cat cat;
  doSpeak(cat);

  Dog dog;
  doSpeak(dog);
}

// 当 Animal 类中的 speak 函数不是虚函数时， sizeof(Animal) = 1 空对象
// 当 speak 函数是虚函数时， sizeof(Animal) = 8 (64bit)  内部包含一个vfptr 
// vfptr(virtual function pointer) 虚拟函数（表）指针  指向 vftable(虚拟函数表，内部记录虚函数的地址)

void test1()
{
  cout << "sizeof(Animal)=" << sizeof(Animal) << endl;
}

int main()
{
  test();
  test1();
  return 0;
}