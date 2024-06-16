// Create a class named 'ARRAY' that dynamically allocates
// an array in its constructor and deallocates it in its destructor.

#include <iostream>
using namespace std;
class Array {
private:
  int *data; // pointer to the dynamically allocated array
  int size;  // size of array
public:
  Array() : data(nullptr), size(0) {
    cout << "Array of size 0 created" << endl;
  }

  Array(int size) {
    this->size = size;
    data = new int[size]; // allocates memory;
    cout << "Array of size " << size << " created." << endl;
  }

  // destructor: deallocates the dynamically allocated mermory
  ~Array() {
    delete[] data; // free allocated memory
    cout << "Array of size " << size << " destroyed" << endl;
  }

  void setvalue(int index, int value) {
    if (index >= 0 && index < size) {
      data[index] = value;
    }
  }

  int getvalue(int index) {
    if (index >= 0 && index < size) {
      return data[index];
    }
    return false;
  }
  int getsize() { return size; }
};

int main() {
  int arraysize = 10;
  Array arr[arraysize];

  for (int i = 0; i < arraysize; i++) {
    // explicit call
    arr[i] = Array(10);

    arr[i].setvalue(0, i * 5);
    cout << "value at index 0: " << arr[0].getvalue(0) << endl;
  }
  return 0;
}
