/*
 * A. In Search of an Easy Problem
 * Link: https://codeforces.com/problemset/problem/1030/A
 *
 * By: Legacy
 */
#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  bool flag = 0;
  int x;
  for (int i = 0; i < n; i++) {
    std::cin >> x;
    if (x == 1) {
      flag = 1;
      break;
    }
  }

  if (flag) {
    std::cout << "HARD" << std::endl;
  } else {
    std::cout << "EASY" << std::endl;
  }
}