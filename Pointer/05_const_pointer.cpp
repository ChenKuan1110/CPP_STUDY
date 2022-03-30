#include <iostream>

using namespace std;

int main()
{

  int a = 10;
  int b = 20;

  // 1. const 修饰常量
  // 指针常量 
  // 指向不可修改，指向的值可以修改
  int * const p1 = &a;
  *p1 = 20; // 可以修改指向的值
  // p1 = &b; //不能修改指向


  // 2. const 修饰指针
  // 常量指针
  // 指向可以修改，指向的值不可以修改
  const int * p2 = &a;
  p2 = &b; // 可以修改指向
  // *p2 = 200; //不可以修改值


  // 3. 即修饰指针，也修饰常量
  // 指向和指向的值均不可修改
  const int * const p3 = &a;
  // p3 = &b; // 不能修改指向
  // *p3 = 200;  // 不能修改值

  return 0;
}