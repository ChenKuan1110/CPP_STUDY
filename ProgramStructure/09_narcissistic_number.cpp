/*
  水仙花数
  水仙花数是一个三位数，它的每个位上的数字的 3次幂之和等于它本身
  例如 153, 1^3 + 5^3 + 3^3 = 153
*/

# include <iostream>

using namespace std;

int main()
{
  int num = 100;
  int units, tens, hundreds;
  do
  {
    // 解析个位 十位 百位
    hundreds = num / 100;
    tens = (num / 10) % 10; // (num - hundreds * 100) / 10;
    units = num % 10;
    // cout << hundreds << " " << tens << " " << units << endl;
    if (num == hundreds * hundreds * hundreds + tens * tens * tens + units * units * units)
    {
      cout << num << " 是水仙花数" << endl;
    }
    num++;
  } while (num > 100 && num < 999);

  return 0;
}