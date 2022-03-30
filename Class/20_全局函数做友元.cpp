#include <iostream>
using namespace std;

// 全局函数做友元

class House
{
  // 全局函数做友元
  friend void goodGuy(House *house);

private:
  string bedRoom;

public:
  string livingRoom;
  House()
  {
    livingRoom = "客厅";
    bedRoom = "卧室";
    }
};

// 全局函数
void goodGuy(House *house)
{
  cout << "好基友全局函数 访问" << house->livingRoom << endl;
  // 私有属性访问不到，除非让全局函数做友元
  cout << "好基友全局函数 访问" << house->bedRoom << endl;
}

void test()
{
  House house;
  goodGuy(&house);
}

int
main()
{
  test();
  return 0;
}