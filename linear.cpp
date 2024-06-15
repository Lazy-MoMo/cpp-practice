// ax + by = m and cx + dy = n x=(md-bn)/(ad-cb)   y=(na-mc/ad-cb)

#include<iostream>
using namespace std; 

void Result(float a , float b , float c , float d , float m , float n);

int main(){
  float a , b , c , d , m , n;
  std::cout << "Enter the value of a , b , c , d , m , n:";
  std::cin >> a >> b >> c >> d >> m >> n;
  Result(a,b,c,d,m,n);
}

void Result(float a , float b , float c , float d, float m , float n){
  int x , y;
  x = ((m*d)-(b*n))/((a*d)-(c*b)) ;
  y = ((n*a)-(m*c))/((a*d)-(c*b)) ;
  std::cout << "X = "<<x<<endl;
  std::cout << "Y = "<<y<<endl;
}
