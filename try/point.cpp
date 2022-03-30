# include <stdio.h>

int main()
{
  int a = 10;
  int *p;
  int *p1 = NULL;

  p = &a;

  printf("变量a的地址为： %p\n", &a);
  printf("指针变量p指向的地址为: %p\n", p);
  printf("指针变量p1指向的地址为: %p\n", p1); // NULL 0x0

  // 使用指针访问值
  printf("*p 变量的值： %d\n", *p);
  return 0;
}