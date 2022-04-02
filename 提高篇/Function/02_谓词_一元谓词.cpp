/**
 * 一元谓词
 * * 返回值是 bool 类型的函数对象
 * * operator() 运算符重载函数参数只有一个
*/ 

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class FindGT5
{
  public:
    bool operator() (int v)
    {
      return v > 5;
    }
};

void test()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(i);
  }

  // 查找容器中大于5的数字
  // 利用算法 find_if : 按条件查找， 找到符合的条件，返回找到元素的迭代器，否则返回最后一个迭代器的位置
  vector<int>::iterator pos = find_if(v.begin(), v.end(), FindGT5());
  if(pos != v.end())
  {
    cout << "找到有大于 5 的元素: " << *pos << endl;
  }
  else
  {
    cout << "没有找到大于 5 的 元素" << endl;
  }
}

int main()
{
  test();
  return 0;
}
