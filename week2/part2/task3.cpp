/*
 * Make a program to take two integer input from user (use cin>>)
Print “yes” if first number is greater than second number
Otherwise print “no”.
*
* Author: Legacy
* */

#include <iostream>

using namespace std;



int main(void)
{
    int firstNum, secondNum;

    cout << "First Number? ";
    cin >> firstNum;
    cout << "Second Number? ";
    cin >> secondNum;


    if(firstNum > secondNum){
        cout << "Yes" <<endl;
    }else {
        cout << "No" << endl;
    }
    
    //compare(firstNum, secondNum);
}

void compare (int num1, int num2){

    if(num1 > num2 ){

        cout<< "First Number Greater than Second Number" << endl;
  
    } else if( num2 > num1 ){

        cout<< "Second Number Greater than First Number" << endl;

    }else{
        cout << "Both are Equal" <<endl;
    }
}
