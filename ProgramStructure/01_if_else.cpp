# include <iostream>

using namespace std;

int main()
{
  int score = 0;
  cout << "请输入您的分数：" << endl;
  cin >> score;
  if(score > 600){
    cout << "恭喜你，考上了一本！" << endl;
  }else{
    cout << "差点儿" << endl;
  }
  return 0;
}