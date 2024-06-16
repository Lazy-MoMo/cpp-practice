// Create a class named person with a constructor that initalizes
// the person's name and age.
// Also include a destructor that prints a message when an object of this
// class is destroyed.

#include <cstring>
#include <iostream>
using namespace std;

class Details {
private:
  char name[20];
  int age;

public:
  // Constructor parameter

  void PrintData() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }

  Details(void) {
    strcpy(name, "Abhishekh Joshi");
    age = 20;
  }

  ~Details() { cout << "-----------END-----------"; }
};
int main() {
  Details det;
  det.PrintData();
  return 0;
}
