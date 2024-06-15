//demonstrates setw manipulator
#include<iostream>
#include<iomanip>     //for setw manipulator
using namespace std;

int main(){
  long pop1=2425873 , pop2=234 , pop3 = 3142;

  cout<< setw(8) << "LOCATION" << setw(12) <<"POPULATION" << endl
    << setw(8) << "portcity" << setw(12) <<pop1 << endl
    << setw(8) << "hightown" << setw(12) <<pop2 << endl
    << setw(8) << "lowville" << setw(12) <<pop3 <<endl;
  return 0;
}
