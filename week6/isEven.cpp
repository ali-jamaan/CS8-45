/*
* Q3: Write a function named isEven that checks if a given number is even.
bool isEven(int number) {
    // code here
}
*
** By: Legacy
*/

#include <iostream>

using namespace std;

bool isEven(int n);

int main(void) {
  int n;
  cin >> n;

  if (isEven(n)) {
    cout << "Even Number\n";
  } else {
    cout << "Odd Number\n";
  }
}

bool isEven(int n) { return (n % 2 == 0) ? true : false; }