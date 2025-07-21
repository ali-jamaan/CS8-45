/*
6- write a program to make a calculator 
*
* By: Legacy
*/

#include <iostream>

using namespace std;

int main (void){

    char op ;
    double num1, num2;
    double output;

    bool state = true; //check for the expression as expected or not
    cout << "Enter Expression (5 + 5)"<< endl;
    cin >> num1 >> op>> num2;

    if ( op == '+')
    {
        output = num1 + num2;
    }else if (op =='-')
    {
        output = num1 - num2;
    }else if ( op == '*')
    {
        output = num1 * num2;
    }else if (op == '/')
    {
        if (num2 != 0)
            output = num1 / num2;
        else
            cout << "Error: Division by zero!" <<endl;
    }else {
        state = false;
        cout << "InValid Exprassions."<< endl;
    }

    if(state){
        //cout << num1 << " " << op << " " << num2 << " = "<< output << endl;
        cout << "result: "<< output <<endl;
    }
}