# include <iostream>
using namespace std;

template<typename T>
class MyArray
{
  public:
    MyArray(int capacity)
    {
      // cout << "有参构造调用" << endl;
      // 保存容量
      this->m_capacity = capacity;
      // 初始化保存数量
      this->m_size = 0;
      // 初始化开辟数组空间的地址
      this->m_p = new T[capacity];
    }
    MyArray(MyArray &arr)
    {
      // cout << "拷贝构造调用" << endl;
      // 拷贝容量
      this->m_capacity = arr.m_capacity;
      // 拷贝大小
      this->m_size = arr.m_size;
      // 拷贝数组地址
      this->m_p = new T [arr.m_capacity];

      // 拷贝数组中的值
      for (int i = 0; i < this->m_capacity;i++)
      {
        this->m_p[i] = arr.m_p[i];
      }
    }

    // 拷贝构造，解决浅拷贝的问题
    MyArray& operator=(const MyArray &arr)
    {
      // cout << "MyArray operator= 调用" << endl;
      // 先判断堆区是否有数据，有数据先释放
      if(this->m_p != NULL)
      {
        delete[] this->m_p;
        this->m_p = 0;
        this->m_capacity = 0;
        this->m_size = 0;
      }
      // 拷贝容量
      this->m_capacity = arr.m_capacity;
      // 拷贝大小
      this->m_size = arr.m_size;
      // 拷贝数组地址
      this->m_p = new T [arr.m_capacity];
      // 拷贝数组中的值
      for (int i = 0; i < this->m_capacity;i++)
      {
        this->m_p[i] = arr.m_p[i];
      }
      return *this;
    }

    // 尾部插入
    void append(const T &item)
    {
      // 当容量满了之后，不再插入
      if(this->m_capacity == this->m_size)
      {
        cout << "数组容量已满" << endl;
        return;
      }
      this->m_p[this->m_size] = item;
      this->m_size++;
    }

    // 尾部删除
    void deleteTail()
    {
      // 判断大小
      if(this->m_size == 0)
      {
        return;
      }
      // 逻辑删除，实现尾部删除
      this->m_size--;
    }

    // 重载 [] 运算符，实现通过下标访问元素
    // arr[3] = 100 , 
    T& operator[](int sub)
    {
      return this->m_p[sub];
    }

    // 获取容量
    int getCapacity()
    {
      return this->m_capacity;
    }

    // 获取大小
    int getSize()
    {
      return this->m_size;
    }

    ~MyArray()
    {
      if(this->m_p != NULL)
      {
        // cout << "析构函数调用" << endl;
        delete[] this->m_p;
        this->m_p = NULL;
      }
    }

  private:
    T* m_p; // 指针，指向堆区数组空间
    int m_size; // 当前存储内容大小
    int m_capacity; // 容量大小
};

void test()
{
  // 创建数组
  MyArray<int> myArr(5);
  myArr.append(1);
  myArr.append(2);
  myArr.append(3);
  myArr.append(4);

  cout << "数组容量：" << myArr.getCapacity() << endl;
  cout << "数组大小：" << myArr.getSize() << endl;

  // 测试拷贝构造
  MyArray<int> myArr2(myArr); 

  // 测试 赋值运算符重载
  MyArray<int> myArr3(100);
  myArr3 = myArr;
}


void test2()
{
  MyArray<string> fruits(10);
  fruits.append("apple");
  fruits.append("banana");
  fruits.append("pear");
  fruits.append("peach");
  fruits.append("orange");

  cout << "数组容量: " << fruits.getCapacity() << endl;
  cout << "数组个数: " << fruits.getSize() << endl;

  cout << "通过下标访问元素" << endl;
  for (int i = 0; i < fruits.getSize(); i++)
  {
    cout << fruits[i] << " ";
  }
  cout << endl;

  fruits.deleteTail();
  fruits.deleteTail();
  cout << "size: " << fruits.getSize() << endl; 
}

class Hero
{
  private:
    string name;
    int life;
  public:
    Hero(){}
    Hero(string name, int life)
    {
      this->name = name;
      this->life = life;
    }
    void showInfo()
    {
      cout << this->name << " " << this->life << endl;
    }
};

void printHero(MyArray<Hero> hero)
{
  for (int i = 0; i < hero.getSize();i++)
  {
    hero[i].showInfo();
  }
}

// 测试自定义数据
void test03()
{
  Hero h1("孙悟空", 3000);
  Hero h2("猪八戒", 6000);
  Hero h3("刘备", 4000);
  Hero h4("关羽", 4000);
  Hero h5("张飞", 6000);

  MyArray<Hero> hero(5);
  hero.append(h1);
  hero.append(h2);
  hero.append(h3);
  hero.append(h4);
  hero.append(h5);

  printHero(hero);
}

int main()
{
  // test();
  test2();
  cout << "测试自定义数组类型" << endl;
  test03();
  return 0;
}