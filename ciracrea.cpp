//demonstrates floating point veriables
#include<iostream>
using namespace std;

int main(){
  float rad;
  const float PI = 3.14159F;

  cout << "Enter radius of circle:";
  cin >> rad;
  float area = PI * rad * rad ;
  cout << "area is " << area << endl;
  return 0;
}

