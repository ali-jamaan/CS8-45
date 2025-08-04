#include <iostream>
#include <string>

using namespace std;

int main (void)
{

    int num;
    cout << "Who many studients? ";
    cin >> num;

    string name[num] ; 
    int math[num], english[num];

    string seq[num]= {"First", "Secand", "thierd"};

    for (int i = 0 ; i < num; i ++)
    {
        cout << seq[i]<< "Studient Name and grade in math then english\n";
        cin >> name[i]>> math[i] >> english[i];
    }

    cout << "\nName\tMath\tEnglish\tTotal"<<endl;
    for(int i=0 ; i< num; i++)
    {
        cout<< name[i] <<"\t"<< math[i]<< "\t"<< english[i] << "\t"<< english[i]+math[i]<<endl;
    }

    cout << endl;
}