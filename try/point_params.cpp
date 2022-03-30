// 传递指针给函数
# include <stdio.h>
# include <time.h>

void getSeconds(unsigned long *par);

int main()
{
  unsigned long sec;

  getSeconds(&sec);

  printf("Number of Seconds: %ld\n", sec);

  return 0;
}

void getSeconds(unsigned long *par)
{
  /* 获取当前的秒数 */
  *par = time(NULL);
  return;
}