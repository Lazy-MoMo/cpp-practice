#include<iostream>
using namespace std;

int main()
{
  int age;
  string name;
  
  cout << "enter your name: ";
  getline(cin , name);
  cout<<"Enter your age: ";
  cin >> age; //you can't use cin before getline because cin leaves a empty line after input which getline will read as a value
 cout <<"Hello " << name;
 cout<<"You are "<< age <<" years old.";

  //for string
  
  
  
  return 0;
}
