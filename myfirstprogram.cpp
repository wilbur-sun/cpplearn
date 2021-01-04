#include <iostream>
#include <string>  // it is usually a good idea to do so directly even if not strictly necessary for a successful build
#include <cmath>
using namespace std;

int main() {
  // Learning from site https://www.w3schools.com/cpp/default.asp

  /* The code below will print the words Hello World! 
     to the screen, and it is amazing */
  cout << "Hello World!\n";
  cout << "I am learning C++." << endl;

  int myNum = 15;             // Integer (whole number)
  float myFolatNum = 5.99;    // Floating point number
  double myDoubleNum = 5.98;  // Floating point number
  char myLetter = 'D';        // Character
  string myText = "Hello";    // String
  bool myBoolean = true;      // Boolean

  // scientific number with an "e" to indicate the power of 10
  float f1 = 35e3;
  double d1 = 12E4;

  char a = 65, b = 66, c = 67;
  cout << a << b << c << endl;

  cout << myText << endl;

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

  int num1, num2;
  int sum;
  cout << "Type a number: "; // Type a number and press enter
  cin >> num1; // Get user input from keyboard
  cout << "Type another number: ";
  cin >> num2;
  sum = num1 + num2;
  cout << "Sum is: " << sum << endl;

  string firstName = "Wilbur";
  string lastName = "Sun";
  string fullName = firstName.append(" ").append(lastName);
  cout << fullName << endl;
  cout << "The length of the text string is: " << fullName.size() << endl;

  cout << "Type your full name: ";
  //  cin >> fullName;  this considers a space (whitespace, tabs, etc) as a terminating character
  cin.ignore();  // otherwise getline() in below line may not work as we called cin before
  getline (cin, fullName);
  cout << "Your name is: " << fullName << endl;
  
  // C++ Math
  cout << "sqrt(64)=" << sqrt(64) << endl;;
  cout << "round(2.6)=" << round(2.6) << endl;
  cout << "log(2)=" << log(2) << endl;
  
  // Boolean
  cout << "(5 >= 1)=" << (5>=1) << endl; 

  return 0;
}
