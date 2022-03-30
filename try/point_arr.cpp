/*
  指针数组：

*/

# include <stdio.h>

const int MAX = 3;

int main()
{
  int var[] = {10, 20, 100};
  int *ptr[MAX];    // 定义一个指向整型指针的数组 
  int i;

  // 将指针数组分别指向整型数组 var
  for (i = 0; i < MAX; i++)
  {
    ptr[i] = &var[i];
  }

  for (i = 0; i < MAX; i++)
  {
    // printf("Value of var[%d] = %d\n", i, var[i]);
    printf("Value of var[%d] = %d\n", i, *ptr[i]);
  } 
  return 0;
}