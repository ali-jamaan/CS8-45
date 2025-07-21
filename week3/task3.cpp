/*
3- Given 2 numbers A and B. print “Yas” if A Greater than or equal to B. otherwise print “NO”
*
* By: Legacy
*/

#include <iostream>
using namespace std;

int main(void){
    int A, B;

    cout << "A Number? ";
    cin >> A;
    cout << "B Number? ";
    cin >> B;

    if (A >= B ){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}