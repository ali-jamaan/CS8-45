/*
 * Make a program to take two numbers from user
Print summation, multiplication and subtraction of this two numbers
*
* By: Legacy
* */

#include <iostream>

using namespace std;

int main(void)
{
    int num1, num2;

    cout << "Number? ";
    cin >> num1;
    
    cout << "Number? ";
    cin >> num2;

    int add = num1 + num2;
    int mult = num1 * num2;
    float sub =(float) num1 / num2 ;

    cout<< "Summation of first and second Number is "<< add<< endl;
   
    cout<< "Multiplication of first and second Number is "<< mult << endl;

    cout<< "Subtraction of first and second Number is "<< sub << endl;


}
