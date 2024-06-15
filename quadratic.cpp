#include<iostream>
#include<cmath>
using namespace std;

void ShowOutput(float a ,float b ,float c);
int main()
{
  float a , b , c ;

  cout<<"Enter the value of a , b , c :"<<endl;
  cin>> a >> b >> c;

  float disc = pow(b,2) - 4*a*c ;
  if (disc >= 0)
  {
    std::cout << "the soultion is real."<<endl;
    ShowOutput(a , b , c);
  }
  else {
    std::cout << "the soultion is imaginary"<<endl;
  }

  std::cout << a <<"(x^2) + "<< b <<"x + "<< c <<" = 0";
  
  return 0;
}


void ShowOutput(float a ,float b ,float c){
  float x1 , x2;

  x1 = (- b + sqrt(pow(b,2)-(4*a*c)) ) / (2*a) ;
  x2 = (- b - sqrt(pow(b,2)-(4*a*c))) / (2*a) ;
  std::cout << "X1 = " << x1 <<endl;
  std::cout << "X2 = " << x2 <<endl;

}
