#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file, good practice to clean up unnecessary memory space
  MyFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream MyReadFile("filename.txt");

  // Use a while loop together with the getline() to read the file line by line
  while (getline(MyReadFile, myText)) {
    // Output the text from the line
    cout << myText << "\n";
  }

  // Close the file
  MyReadFile.close();
}
