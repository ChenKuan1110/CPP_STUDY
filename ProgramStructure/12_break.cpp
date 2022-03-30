#include <iostream>

using namespace std;

int main()
{
  // break

  // 1. 跳出 switch
  // int num = 0;
  // cout << "选择挑战副本的难度 （1.难 2. 容易 3. 简单）: ";
  // cin >> num;
  // switch (num)
  // {
  // case 1:
  //   cout << "有点儿难哟！你可小心点儿吧！" << endl;
  //   break;
  // case 2:
  //   cout << "不要大意哟！" << endl;
  //   break;
  // case 3:
  //   cout << "对你来说，应该是小case !" << endl;
  //   break;
  // default:
  //   break;
  // }
  // return 0;

  // 2. 跳出 循环
  // for (int i = 0; i < 10;i++)
  // {
  //   if(i==5)
  //   {
  //     break;
  //   }
  //   cout << i << endl;
  // }
  // return 0;

  // 3. 跳出内层循环
  for (int i = 0; i < 10;i++){
    for (int j = 0; j < 10;j++){
      cout << "*";
      if(i==5 || j==5){
      break;
    }
    }
    cout << endl;
  }
  return 0;
}