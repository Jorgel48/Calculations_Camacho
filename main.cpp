/*
name: Jorge Camacho
Course Section: COSC-1436-57002
Editor: repl.it
Summary: “ This is a program to work with the various arithmetic operators in C++ and conditions.
*/

#include <iostream>
using namespace std;

int main() {
  double  number1; 
  double number2;
  int number3;
  int number4;
  double addition;
  double subtraction;
  double multiplication;
  double division;
  int modulus; 
 
  cout <<"Please enter Number 1: ";
  cin >> number1;
  cout <<"Please enter Number 2: ";
  cin >> number2; 
  cout <<"Please enter Number 3: ";
  cin >> number3; 
  cout <<"Please enter Number 4: ";
  cin >> number4;
  addition = number1 + number2;
  subtraction = number1 - number2;
  multiplication = number1 * number2;
  division = number1 / number2;
  modulus = number3 % number4;
  cout << number1 << "+" << number2 << "=" << addition << endl;

  cout << number1 << "-" << number2 << "=" << subtraction << endl;

   cout << number1 << "*" << number2 << "=" << multiplication << endl;

    cout << number1 << "/" << number2 << "=" << division << endl;

     cout << number1 << "%" << number2 << "=" << modulus << endl; 

  


  //Input 
cout << "Hello World!\n";
}