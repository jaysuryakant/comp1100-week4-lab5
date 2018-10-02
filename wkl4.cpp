#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer

using namespace std;
int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
 int a,b,c,d ;
 cout << "Enter number for multiplication" << endl;
 cin >> a >> b >> c;
 d = a*b*c;

 cout << a << "*" << b << "*" << c << "=" << d;

 





  // Multiply the three integers





  // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

 string haiku;
 cout << "Autumn moonlight";
 getline (cin,haiku);
 cout << "a worm digs silently";
 getline (cin,haiku);
 cout << "into the chestnut.";

 













  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  std::string myNumber = "1234"; // Convert this string to an integer 
  int myint;
  
  cin>> myint; 

  cout << myint <<  " : is an integer" << endl;

  
  

  

  return 0;
}