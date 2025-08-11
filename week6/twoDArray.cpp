/*
q1:Make 2d array and print it in table form
    output :
        3 4 5 6
        2 3 5 6
        9 7 4 2
* By: Legacy
**/

#include <iostream>

using namespace std;

int main(void) {
  int arr[3][4] = {{3, 4, 5, 6}, {2, 3, 5, 6}, {9, 7, 4, 2}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}