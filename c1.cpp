#include<iostream>
using namespace std;

int main()
{
  string phrase = "helllo again";
  cout <<phrase.length()<<endl;
  cout << phrase[5]<<endl;
  phrase[0] = 'B' ;
  cout <<phrase<<endl;
  cout<<phrase.find("again", 0); //0 indicates from where we want to start searching
  cout<< phrase.substr(6 , 3); //starting index,length
}
