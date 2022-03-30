# include <iostream>

using namespace std;

struct Point
{
  int x;
  int y;
  void output()
  {
    cout << "x=" << x << " y=" << y << endl;
  }
};

int main()
{
  Point p;
  p.x = 5;
  p.y = 5;

  // cout << p.x << endl << p.y << endl;
  p.output();
  return 0;
}