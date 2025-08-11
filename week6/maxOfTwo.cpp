/*
 * Q4:Write a function named maxOfTwo that takes two integers and returns the
 *larger of the two.
 *
 ** By: Legacy
 */

#include <iostream>

using namespace std;

int maxOfTwo(int a, int b);

int main(void) {
  int fNum, lNum;
  cin >> fNum >> lNum;

  cout << "Max Number: " << maxOfTwo(fNum, lNum) << endl;
}

int maxOfTwo(int a, int b) { return (a > b) ? a : b; }