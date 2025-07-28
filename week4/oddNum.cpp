/*
* Program to print odd numbers from 0 to 100
*
* By: Legacy
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 100;

    //printing ODD Numbers from 0 to 100 

    cout<< "Odd: ";
    for( int i =1; i <100 ; i+=2)
    {
        cout<< i << " ";
    }
    cout << endl;
}