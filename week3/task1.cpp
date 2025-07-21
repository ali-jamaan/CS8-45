/*
1- Write a program that asks the user for their age and prints a message based on the following conditions:
If the age is less than 13, print "You are a child."
If the age is between 13 and 19, print "You are a teenager."
If the age is 20 or older, print "You are an adult."
*
*By: Legacy
*/

#include <iostream>

using namespace std;

int main (void){
    
    int age ;

    cout << "Age? ";
    cin >> age;

// If the age is less than 13, print "You are a child."
    if (age < 13 && age > 0){
        cout << "You are a child.\n";
    }
// If the age is between 13 and 19, print "You are a teenager."
    else if (age>= 13 && age <= 19){
        cout << "You are a teenager.\n";
    }
// If the age is 20 or older, print "You are an adult."
    else {
        cout << "You are a adualt.\n";
    }

    
}