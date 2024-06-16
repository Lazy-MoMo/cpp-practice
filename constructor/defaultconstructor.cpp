#include <iostream>
using namespace std;

class Complex {
  int a, b;

public:
  // creating a constructor
  // constructor is a special member function with the same name sa of the
  // class. It is automatically invoked whenever an objects is created
  // it is used to initialize the objects of its class

  Complex(void); // Constructor declaration

  void printnumber() {
    cout << "Your number is " << a << " + " << b << "i" << endl;
  }
};

Complex ::Complex(void) //----->This is a default constructor
{
  a = 20;
  b = 30;
}

int main() {
  Complex c1, c2, c3;
  c1.printnumber();
  c2.printnumber();
  c3.printnumber();

  return 0;
}

/*Properties of constructor
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the obect is created
3. They cannot return values and don't have return types
4. It can have default arguments.
5. We cannot refer to their address.
*/
