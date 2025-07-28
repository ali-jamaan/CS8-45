/*
* Program to calculate the factorial of a number
* By: Legacy
*/

#include <iostream>

using namespace std;

int main (void)
{
    int num;
    int fact = 1;
    //asking user to input a number
    cout<< "Number ";
    cin >> num ;

    // check if user input a number less than one
    if (num < 1 )
    {
        cout<< "Invalid Number!"<<endl;
    }else
    {
        //calculating factorial of the number
        cout << "Factorial of " << num << " is ";
        for(; num >1; num--)
        {
            fact *= num;
        }
        cout << fact <<endl;
    }

}