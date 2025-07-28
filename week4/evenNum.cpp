/*
* Program to print even numbers from 0 to 100
*
*By: Legacy
*/
#include <iostream>

using namespace std;

int main (void)
{
    int num =100;

    //printing even number from 0 to 100
    cout << "Even: ";
    for(int i = 2; i <= 100; i+=2)
    {
        cout << i<< " ";
    }

    cout<< endl;
}