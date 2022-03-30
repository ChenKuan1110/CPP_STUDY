#include <iostream>
using namespace std;

class Building;
class Guy
{
public:
  Building *building;
  void visit(); // 让该方法可以访问 Building 类中的私有成员
  void visit2(); // 让该方法不可以访问 Building 类中的私有成员
  Guy();
};

class Building
{
  // 告诉编译器 Guy类的成员函数 visit 可以访问本类的私有成员
  friend void Guy::visit();

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
  // 成员函数中访问其他类中的私有成员
  cout << "好基友类 正在访问" << building->bedRoom << endl;
}

void Guy::visit2()
{
  cout << "好基友类 正在访问" << building->livingRoom << endl;
  // 不能够访问其私有成员
  // cout << "好基友类 正在访问" << building->bedRoom << endl;
}

void test()
{
  Guy guy;
  guy.visit();
  cout << "========" << endl;
  guy.visit2();
}

int main()
{
  test();
  return 0;
}