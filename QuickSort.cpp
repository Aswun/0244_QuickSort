#include <iostream>
using namespace std;

int arr[20]; // array untuk menyimpan nilai
int cmp_count = 0; // jumlah perbandingan
int mov_count = 0; // jumlah perpindahan data
int n; // panjang array

void input() 
{
    while (true)
    {
        cout << "Masukan panjang element array: ";
        cin >> n;
        if (n <= 20)
        break;
            else
        cout << "\nMaksimum panjang array adalah 20" << endl;
    }
    cout << "\n-------------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------------" << endl;
}