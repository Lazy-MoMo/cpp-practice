#include <iostream>
using namespace std;

class Rectangle {
private:
  int length;
  int breadth;

public:
  // Parameterized constructor
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
    cout << "Parameterized constructor called" << endl;
  }

  int area() { return length * breadth; }

  ~Rectangle() { cout << "Destructor called"; }
};

int main() {
  Rectangle rect2(10, 20); // Parameterized constructor

  cout << "Area of rect2: " << rect2.area() << endl;

  return 0;
}
