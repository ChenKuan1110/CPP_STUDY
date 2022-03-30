# include <stdio.h>

const int MAX = 3;

int main()
{
  int var[] = {10, 20, 100};
  int i, *ptr = NULL;

  // ++
  printf("指针 ++\n");
  ptr = var; // 指向组数地址
  for (i = 0; i < MAX; i++)
  {
    printf("  存储地址 var[%d] = %p\t", i, ptr);
    printf("  存储值： var[%d] = %d\n", i, *ptr);
    ptr++;
  }

  // --
  printf("指针 --\n");
  ptr = &var[MAX - 1]; // 指向数组最后一个元素的地址
  for (i = MAX; i > 0; i--)
  {
    printf("  存储地址 var[%d] = %p\t", i-1, ptr);
    printf("  存储值： var[%d] = %d\n", i-1, *ptr);
    ptr--;
  }

  // 指针比较 ： 指针可以使用比较运算符进行比较
  printf("通过比较运算符来遍历数组\n");
  ptr = var; // 指向首地址
  i = 0;
  while (ptr <= &var[MAX - 1])
  {
    printf("  存储地址 var[%d] = %p\t", i, ptr);
    printf("  存储值： var[%d] = %d\n", i, *ptr);
    ptr++; // 指向下一个位置
    i++;
  }

  return 0;
}