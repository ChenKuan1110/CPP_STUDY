// 数组作为参数(也是指针)

# include <stdio.h>

double getAverage(int *arr, int size);

int main()
{
  int balance[5] = {1000, 2, 3, 17, 50};
  double avg;

  avg = getAverage(balance, 5);

  printf("Average value is %f\n", avg);
}

double getAverage(int *arr, int size)
{
  int i = 0, total=0;
  double avg;
  for (; i < size; i++)
  {
    total += arr[i];
  }

  avg = (double) total / size;
  return avg;
}