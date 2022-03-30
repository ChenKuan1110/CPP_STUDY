#include <iostream>
using namespace std;


// ------- 抽象类 ------
class Cpu
{
  protected:
    string name;
  public:
    virtual void calculate() = 0;
};

class GraphicsCard
{
  protected:
    string name;
  public:
    virtual void display() = 0;
};

class Memory
{
  protected:
    string name;
  public:
    virtual void storage() = 0;
};


// 电脑基类
class Computer
{
  protected:
    Cpu *p_cpu; // cpu 指针
    GraphicsCard *p_graphicsCard; // 显卡指针
    Memory *p_meory; // 内存指针
  public:
    void run()
    {
      p_cpu->calculate();
      p_graphicsCard->display();
      p_meory->storage();
    }
    virtual ~Computer(){
      {
      cout << "电脑基类析构被调用" << endl;
      if (p_cpu != NULL)
      {
        delete p_cpu;
        p_cpu = NULL;
      }
      if(p_graphicsCard != NULL)
      {
        delete p_graphicsCard;
        p_graphicsCard = NULL;
      }
      if(p_meory != NULL)
      {
        delete p_meory;
        p_meory = NULL;
      }
    }
    };
    
};

// Intel CPU
class IntelCpu: public Cpu
{
  public:
    IntelCpu()
    {
      name = "Intel CPU";
    }
    void calculate()
    {
      cout << name << "计算" << endl;
    }
};

// AMD CPU
class AMDCpu: public Cpu
{
  public:
    AMDCpu()
    {
      name = "AMD CPU";
    }
    void calculate()
    {
      cout << name << "计算" << endl;
    }
};

// Intel 显卡
class IntelGraphicsCard: public GraphicsCard
{
  public:
    IntelGraphicsCard()
    {
      name = "Intel 显卡";
    }
    void display()
    {
      cout << name << "正常显示" << endl;
    }
};

// 英伟达显卡
class NviDiaGraphicsCard: public GraphicsCard
{
  public:
    NviDiaGraphicsCard()
    {
      name = "英伟达 显卡";
    }
    void display()
    {
      cout << name << "正常显示（我要牛皮些）" << endl;
    }
};

// 三星内存条
class SumsungMemory: public Memory
{
  public:
    SumsungMemory()
    {
      name = "三星 内存";
    }
    void storage()
    {
      cout << name << "存储正常" << endl;
    }
};


// 闪迪内存条
class FlashMemory: public Memory
{
  public:
    FlashMemory()
    {
      name = "闪迪 内存";
    }
    void storage()
    {
      cout << name << "存储正常" << endl;
    }
};



class Computer1: public Computer
{
  public:
    Computer1()
    {
      p_cpu = new IntelCpu;
      p_graphicsCard = new NviDiaGraphicsCard;
      p_meory = new SumsungMemory;
    }
    ~Computer1()
    {
      cout << "电脑1 析构" << endl;
    }
};

class Computer2: public Computer
{
  public:
    Computer2()
    {
      p_cpu = new AMDCpu;
      p_graphicsCard = new NviDiaGraphicsCard;
      p_meory = new SumsungMemory;
    }
    ~Computer2()
    {
      cout << "电脑1 析构" << endl;
    }
};

class Computer3: public Computer
{
  public:
    Computer3()
    {
      p_cpu = new IntelCpu;
      p_graphicsCard = new NviDiaGraphicsCard;
      p_meory = new FlashMemory;
    }
    ~Computer3()
    {
      cout << "电脑1 析构" << endl;
      if (p_cpu != NULL)
      {
        delete p_cpu;
        p_cpu = NULL;
      }
      if(p_graphicsCard != NULL)
      {
        delete p_graphicsCard;
        p_graphicsCard = NULL;
      }
      if(p_meory != NULL)
      {
        delete p_meory;
        p_meory = NULL;
      }
    }
};

void test()
{
  Computer1 c1;
  Computer2 c2;
  Computer3 c3;

  c1.run();
  c2.run();
  c3.run();
}

int main()
{
  test();
  return 0;
}
