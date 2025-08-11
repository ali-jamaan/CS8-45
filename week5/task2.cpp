/*
write a program that:
    1- Asks the user to enter names and 2 subject marks (e.g. Math and English)
for 3 students. 2- Stores data in arrays. 3- Calculates the total marks for each
student. 4- Prints the table below: output: Name    Math    English     Total
    Ali     80      90          170
* *By: Legacy
*/
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  int num;
  cout << "Who many studients? ";
  cin >> num;

  string name[num];
  int math[num], english[num];

  string seq[num] = {"First", "Secand", "thierd"};

  for (int i = 0; i < num; i++) {
    cout << seq[i] << "Studient Name and grade in math then english\n";
    cin >> name[i] >> math[i] >> english[i];
  }

  cout << "\nName\tMath\tEnglish\tTotal" << endl;
  for (int i = 0; i < num; i++) {
    cout << name[i] << "\t" << math[i] << "\t" << english[i] << "\t"
         << english[i] + math[i] << endl;
  }

  cout << endl;
}