/**
 *  3只小猪称体重
 */

#include <iostream>

using namespace std;

int main()
{
  double pigA, pigB, pigC;
  cout << "输入第1只小猪的重量: " ;
  cin >> pigA;
  cout << "输入第2只小猪的重量: " ;
  cin >> pigB;
  cout << "输入第3只小猪的重量: " ;
  cin >> pigC;

  if (pigA > pigB && pigA > pigC)
  {
    if (pigB > pigC)
    {
      cout << "第1只小猪最重，第2只次之，第3只最轻" << endl;
    }
    else
    {
      cout << "第1只小猪最重，第3只次之，第2只最轻" << endl;
    }
  }
  else if (pigB > pigA && pigB > pigC)
  {
    if (pigA > pigC)
    {
      cout << "第2只小猪最重，第1只次之，第3只最轻" << endl;
    }
    else
    {
      cout << "第2只小猪最重，第3只次之，第1只最轻" << endl;
    }
  }
  else if(pigC > pigA && pigC > pigB)
  {
    if (pigA > pigB)
    {
      cout << "第3只小猪最重，第1只次之，第2只最轻" << endl;
    }
    else
    {
      cout << "第3只小猪最重，第2只次之，第1只最轻" << endl;
    }
  }
  return 0;
}