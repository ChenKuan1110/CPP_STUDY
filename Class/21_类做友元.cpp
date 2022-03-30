#include <iostream>
using namespace std;

class Building;
class Guy
{
public:
  Building *building;
  void visit();
  Guy();
};

class Building
{
  // 类做友元核心代码
  friend class Guy;

public:
  Building();
  string livingRoom;

private:
  string bedRoom;
};

Building::Building()
{
  livingRoom = "客厅";
  bedRoom = "卧室";
}

Guy::Guy()
{
  building = new Building();
}

void Guy::visit()
{
  cout << "好基友类 正在访问" << building->livingRoom << endl;
  // 类中访问其他类的私有变量
  cout << "好基友类 正在访问" << building->bedRoom << endl;
}

void test()
{
  Guy guy;
  guy.visit();
}

int main()
{
  test();
  return 0;
}