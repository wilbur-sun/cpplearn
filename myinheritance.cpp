#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  protected:
    string brand = "Ford";
  public:
    void honk() {
      cout << "Tuut, tuut! \n";
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "some content in another class \n";
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
    string getBrand();
};

string Car::getBrand() {
  return brand;  // protected members can be accessed in the inherited class
}

class MyCar: public Car, public MyOtherClass {
};

int main() {
  MyCar myCar;
  myCar.honk();
  cout << myCar.getBrand() + " " + myCar.model << "\n";
  myCar.myOtherFunction();
  return 0;
}

// Why and when to use "Inheritance"?
// It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
