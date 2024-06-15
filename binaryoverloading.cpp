#include<iostream>
using namespace std;
class point
{
  int x,y;
  public:
  point(int a , int b)
  {
    x = a;
    y = b;
  }

  point operator + (point a)
  {
    point temp;
    temp.x = x + a.x;
    temp.y = y + a.y;
    return temp;
  }
};

int main()
{
  point l , m , n;
  n = l + m ;
  return 0;
}

