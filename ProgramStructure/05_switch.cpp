# include <iostream>

using namespace std;

int main()
{
  // switch 
  // 电影打分
  // 10、9 经典
  // 8 7 好电影
  // 6 一般
  // 6以下 烂片

  int score = 0;
  cout << "请输入您对该电影的评分: ";
  cin >> score;

  if(score > 10 || score < 0){
    cout << "分值应在 0 - 10 之间" << endl;
    return 0;
  }

  switch(score)
  {
    case 10:
    case 9 :
      cout << "经典电影" << endl;
      break;
    case 8:
    case 7:
      cout << "好电影" << endl;
      break;
    case 6:
      cout << "电影一般" << endl;
      break;
    default:
      cout << "烂片" << endl;
      break;
    }
  return 0;
}