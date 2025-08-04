/*
*Make a program to take number n and then take n numbers from user then replace all (2) in with 0
Example:
Input:
5
2 5 7 2 1
Output:
0 7 5 0 1
** BY: Legacy
*/

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int arr[n];

    for (int i =0 ; i<n ; i++)
   {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            arr[i] = 0;
        }
   } 

   for (int i =0 ; i < n ; i++)
   {
    cout << arr[i]<< " ";
   }
   cout << endl;

}