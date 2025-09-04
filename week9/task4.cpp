/*
 * 758A - Holiday Of Equality
 * Link: https://codeforces.com/problemset/problem/758/A
 *
 * By: Legacy
 */
#include <climits>
#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  int arr[n];
  int maxNum = INT_MIN;
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
    if (arr[i] > maxNum) {
      maxNum = arr[i];
    }
  }

  int total = 0;
  for (int i = 0; i < n; i++) {
    total += maxNum - arr[i];
  }

  std::cout << total << std::endl;
}