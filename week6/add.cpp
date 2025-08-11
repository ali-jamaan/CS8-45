/*
 * Q2:Write a function named add that takes two integers as input and returns
 *their sum.
 *
 ** By: Legacy
 */

#include <iostream>

using namespace std;

int add(int a, int b);

int main(void) {
  int num1, num2;
  cin >> num1 >> num2;

  cout << "Submition: " << add(num1, num2) << endl;
}

int add(int a, int b) { return a + b; }