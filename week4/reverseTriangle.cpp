/*
 * Program to print a reverse triangle pattern using hash symbols
 *
 * By: Legacy
*/

#include <iostream>

using namespace std;

int main(void)
{

    int num = 4;

    for (int i =0; i <num ; i++)
    {
        for(int j= 1; j <= num-i ; j++)
        {
            cout << "#";
        }
        cout <<endl;
    }
}