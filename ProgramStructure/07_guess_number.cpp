# include <iostream>
# include <ctime>

using namespace std;

int main()
{
  // 生成随机数
  srand((unsigned int)time(NULL));
  int number = rand() % 100 + 1;
  int inputNumber = 0;
  int count = 0; // 猜测次数
  while (true)
  {
    cout << "输入你猜的数字 :";
    cin >> inputNumber;
    count++;
    if(count > 5){
      cout << "游戏失败，请重新开始" << endl;
      break;
    }
    if (inputNumber == number)
    {
      cout << "恭喜你，猜对了!!!" << endl;
      break;
    }else if(inputNumber > number){
      cout << "大了" << endl;
    }else{
      cout << "小了" << endl;
    }
  }
  return 0;
}