/*
4- Given two numbers A and B. 
    print “Multiples” if A is multiple of B or vice versa. 
    Otherwise print “No multiples”.
*
* By: Legacy
*/

#include <iostream>

using namespace std;

int main (void){

    int A, B;
    
    cout << "A Number? ";
    cin >> A;
    cout << "B Number? ";
    cin >> B;

    if (!(A%B) || !(B%A)) {
        cout << "Multiples" << endl;
    } else {
        cout << "No multiples" << endl;
    }
    return 0;

}