#include <iostream>
using namespace std;

class complex {
  int a, b;

public:
  complex(int, int);

  void printnumber() {
    std::cout << "Your number is " << a << " + " << b << "i" << endl;
  }
};

complex ::complex(int x, int y) {
  a = x;
  b = y;
}

int main() {
  // implicit call
  complex a(4, 6);

  // Explicit call
  complex b = complex(5, 7);

  b.printnumber();
  a.printnumber();
  return 0;
}
