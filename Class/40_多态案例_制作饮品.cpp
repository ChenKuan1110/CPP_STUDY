#include <iostream>
using namespace std;

// 制作饮品抽象类
class AbstractMakeDrink
{
  public:
    virtual void step1() = 0;
    virtual void step2() = 0;
    virtual void step3() = 0;
    virtual void step4() = 0;
    void make()
    {
      step1();
      step2();
      step3();
      step4();
    }
    virtual ~AbstractMakeDrink()
    {}
};


// 制作茶
class MakeTea:public AbstractMakeDrink
{
  private:
    void step1(){
      cout << "煮水" << endl;
    }
    void step2(){
      cout << "冲泡茶叶" << endl;
    }
    void step3(){
      cout << "导入杯中" << endl;
    }
    void step4(){
      cout << "加柠檬" << endl;
    }
};


// 制作咖啡
class MakeCaffee:public AbstractMakeDrink
{
  public:
  void step1(){
      cout << "煮水" << endl;
    }
    void step2(){
      cout << "冲泡咖啡" << endl;
    }
    void step3(){
      cout << "导入杯中" << endl;
    }
    void step4(){
      cout << "加糖和牛奶" << endl;
    }
};


// 制作工厂函数
void makeDrink(AbstractMakeDrink *abmd)
{
  abmd->make();
  delete abmd;
}

void test()
{
  // 制作咖啡
  makeDrink(new MakeCaffee);
  cout << "===========" << endl;
  // 制作茶
  makeDrink(new MakeTea);
}

int main()
{
  test();
  return 0;
}