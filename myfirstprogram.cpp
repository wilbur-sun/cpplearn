#include <iostream>
using namespace std;

int main() {
  // Learning from site https://www.w3schools.com/cpp/default.asp

  /* The code below will print the words Hello World! 
     to the screen, and it is amazing */
  cout << "Hello World!\n";
  cout << "I am learning C++." << endl;

  int myNum = 15;
  double myFolatNum = 5.99;
  char myLetter = 'D';
  string myText = "Hello";
  bool myBoolean = true;

  int myAge = 34;
  cout << "My age " << myAge << " years old." << endl;

  int x = 5, y = 6, z = 50;
  cout << x + y + z << endl;

  // Good identifier. It's recommended to use descriptive names in order to create understandable and maintainable code
  const  int minutesPerHour = 60;

  // Bad identifier
  int m = 60;

  // unchangeable and read-only variable value
  const float PI = 3.14;

  int num;
  cout << "Type a number: "; // Type a number and press enter
  cin >> num; // Get user input from keyboard
  cout << "Your number is: " << num << endl;

  return 0;
}
