#include <iostream>

using namespace std;

int main()
{
  int pigs[5] = {300, 350, 200, 400, 250};
  int max = 0;


  for (int i = 0; i < sizeof(pigs) / sizeof(pigs[0]); i++)
  {
    max = max < pigs[i] ? pigs[i] : max;
  }
  cout << "最大体重的是:" << max << endl;
  return 0;
}