// floating const variable 

#include<iostream>
using namespace std;

int main(){
  const float rad = 20.001F;  //20.001
  float rad2 = 20.9911;       //20.9911
  const float rad3 = 20E5;    //2e+06
  float rad4 = 200E2;         //20000
  cout<<rad<<endl;
  cout<<rad2<<endl;
  cout<<rad3<<endl;
  cout<<rad4<<endl;
  return 0;
}
