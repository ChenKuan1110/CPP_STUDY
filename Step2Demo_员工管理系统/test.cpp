#include <iostream>
using namespace std;
#include <fstream>
# define FILENAME "abc.csv"

void test()
{
  cout << "---------- start test func -----" << endl;
  string str = "";
  cout << "输入 str变量的值：";
  cin >> str;
  cout << "str = " << str << endl;
  int i = 0;
  cout << "输入 整形变量i的值: ";
  cin >> i;
  cout << "i = " << i << endl;

  cout << "---------- end test func -----" << endl;
}

int main()
{
  test();
  // ifstream ifs;
  // ifs.open(FILENAME, ios::in);

  // int id = 0;
  // string name = "";
  // int dId = 0;
  // int size = 0; // 数量
  // while (ifs >> id && ifs >> name && ifs >> dId)
  // {
  //   cout << id << "\t" << name << "\t" << dId << endl;
  //   size++;
  // }

  // // char buf[1024] = {0};
  // // while(ifs.getline(buf, sizeof(buf)))
  // // {
  // //   cout << buf << endl;
  // // }
  // // cout << buf << endl;
  // cout << "size=" << size << endl;
  // return 0;
}