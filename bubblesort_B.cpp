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
    cout << " masukkan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + i) << ": ";
        cin >> arr[i]; 
    }
}
void bubblesortarray()
{
    int pass = 1;

    do
    {
        for (int j = 0; j <= n - 1 pass; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass += 1;

        count << "\npass " << pass - 1 << ": ";
        for (ink k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;

    } while (pass <= n - 1 );
}
void  display()
{
    cout << endl;
    cout << "==============================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "==============================" << 
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr [j];
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << - 1 << endl;
    cout << endl;
    cout << endl;
}