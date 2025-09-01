/*
 * Write a C++ Program to find factorial of a number
using class The class will have three functions (one to take the
input, one to calculate the factorial, one to print the answer).
*
* By: Legacy
*/
#include <iostream>

using namespace std;
class Calcluter {
 private:
  int number;
  int fact;

 public:
  Calcluter() = default;
  // Calcluter(int number): number{number}, fact{1}{};

  void inputNum() {
    cout << "Factorial for Number: ";
    cin >> this->number;
    this->fact = 1;
  }

  void factorial() {
    if (number <= 0) {
      exit(-1);
    }
    int i = 1;
    while (i >= number) {
      fact *= i++;
    }
  }
  void printFact() {
    cout << "Factorial " << number << "! is " << fact << endl;
  }
};

int main(void) {
  Calcluter c1;
  c1.inputNum();
  c1.factorial();
  c1.printFact();
}