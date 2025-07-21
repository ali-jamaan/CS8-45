 /*
 2- Write a program that takes two numbers as input and prints:
"The first number is greater" if the first number is larger.
"The second number is greater" if the second number is larger.
"Both numbers are equal" if they are the same.
*
*By: Legacy
 */

#include <iostream> 

 using namespace std;

 int main (void){

    int num1, num2;

    cout << "First Number? ";
    cin >> num1;
    cout << "Second Number? ";
    cin >> num2;

    if (num1 > num2){
        cout << "The first number is greater.\n";
    }else if (num1 < num2){
        cout << "The second number is greater.\n";
    }else{
        cout << "Both numbers are equal\n";
    }


 }