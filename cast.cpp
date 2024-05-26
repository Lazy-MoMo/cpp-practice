//cast = data conversion from one type to another data type
//tests signed and unsigned intergers

#include<iostream>
using namespace std;

int main(){
  int intvar =1500000000;                                 //1,500,000,000,000
  intvar = (intvar * 100) /10;                             //return too large
  cout << "intvar = " << intvar << endl;                  //wrong answer

  intvar = 1500000000;
  int var = (static_cast<double>(intvar) * 100) / 10;      //cast to double
  cout << "intvar = " << intvar << endl;                  //right answer
  return 0;
}

