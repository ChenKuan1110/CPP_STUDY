#include <iostream>
using namespace std;

class BasePage 
{
  public:  
    void header()
    {
      cout << "公共头部" << endl;
    }
    void footer()
    {
      cout << "公共底部页面" << endl;
    }
    void left()
    {
      cout << "公共左侧菜单栏" << endl;
    }
};

class HomePage: public BasePage
{
  public:
    void content()
    {
      cout << "主页内容" << endl;
    }
};

class AboutPage: public BasePage
{
  public:
    void content()
    {
      cout << "关于页面内容" << endl;
    }
};


void test()
{
  HomePage hp;
  hp.header();
  hp.footer();
  hp.left();
  hp.content();

  cout << "------" << endl;
  AboutPage ap;
  ap.header();
  ap.footer();
  ap.left();
  ap.content();
}

int main()
{
  test();
  return 0;
}