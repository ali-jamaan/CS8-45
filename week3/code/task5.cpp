/*
5-(use nested if) Write a program that asks the user to input their exam score, then prints a message based on the following grading system:
If the score is 90 or above, print "Grade: A"
If the score is between 80 and 89, print "Grade: B"
If the score is between 70 and 79, print "Grade: C"
If the score is between 60 and 69, print "Grade: D"
If the score is below 60, print "Grade: F"
*
* By: Legacy
*/

#include <iostream>

using namespace std;

int main(void){

    int degree;
    char grade;
    cout << "Your degree? ";
    cin >> degree;
    if (degree < 100 && degree > 0 ){
        if (degree >= 90){
            grade = 'A';
        }else if( degree >= 80){
            grade = 'B';
        }else if (degree >= 70 ){
            grade = 'C';
        }else if (degree >= 60){
            grade = 'D';
        }else{
            grade = 'F';
        }

        cout << "Grade: "<< grade<< endl;
    }else{
        cout << "Invalid Degree"<< endl;
    }

}