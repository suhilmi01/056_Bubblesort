#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

void input()
{
    int d;
    while (true)
    {
        cout << "masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <=20)
            break;
        else
        {
            cout << "\narray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
}