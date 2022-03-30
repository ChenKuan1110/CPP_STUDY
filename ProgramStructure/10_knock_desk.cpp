#include <iostream>

using namespace std;

// int main()
// {
//   int number = 1;
//   int units = 0;
//   int tens = 0;

//   for (; number < 100; number++)
//   {
//     units = number % 10; // 个位
//     tens = number / 10; // 十位
//     if (number % 7 == 0 || (units > 0 && units % 7 == 0 ) || (tens >0 && tens % 7 == 0))
//     {
//       cout << "敲桌子" << endl;
//     }
//     else
//     {
//       cout << number << endl;
//     }
//   }
//   return 0;
// }

int main()
{
  int number = 1;
  for (; number < 100;number ++)
  {
    if(number % 7 == 0 || (number/10) % 7 == 0 || (number % 10) % 7 == 0 )
    {
      cout << "敲桌子" << endl;
    }
    else 
    {
      cout << number << endl;
    }
  }
}