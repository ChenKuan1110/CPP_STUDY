#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int *p;
  p = &a;

  cout << *p << endl;
  cout << "sizeof(p) " << sizeof(p) << endl;
  cout << "sizeof(char *) " << sizeof(char *) << endl;
  cout << "sizeof(float *) " << sizeof(float *) << endl;
  cout << "sizeof(double *) " << sizeof(double *) << endl;
  return 0;
}