#include <iostream>
using namespace std;

int main()
{
    string nama;
    int umur;
    char jkelamin;

    cout << "Masukkan nama anda: ";
    getline (cin,nama);
    cout << "masukan umur anda sekarang: ";
    cin >> umur;
    cout << "Masukkan jenis kelamin anda (L/P): ";
    cin >> jkelamin;

    cout << "Nama anda: " << nama << "\nUmur: " << umur <<"\nJenis kelamin: " << jkelamin << endl;
    return 0;
}