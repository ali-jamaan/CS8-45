#include <iostream>

using namespace std;

double add(double num1, double num2){return num1 + num2;}
double subtract(double num1, double num2){return num1 - num2;}
double multiply(double num1, double num2){return num1 * num2;}
double divide(double num1, double num2){
    if ( num2){return num1 / num2;}
    else{
        cout <<"Error: Division by Zero!" << endl;
        return 0;
    }
}


int main (void){
    char choice;
    do{
        char op;
        double num1, num2;

        cout << "Enter Expression (5 + 5)!" << endl;
        cin >> num1 >> op >> num2 ;

        switch (op){
            case '+': cout<< add(num1, num2)<< endl; break;
            case '-': cout<< subtract(num1, num2)<< endl; break;
            case '*': cout<< multiply(num1, num2)<< endl; break;
            case '/': cout<< divide(num1, num2)<< endl; break;
        }

        cout << "Do you want to calculate again (Y/n). ";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');

    return 0;


}