#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int jmlhsmpl_2311102061;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jmlhsmpl_2311102061;

    string simpul[jmlhsmpl_2311102061];
    int busur[jmlhsmpl_2311102061][jmlhsmpl_2311102061];

    for (int i = 0; i < jmlhsmpl_2311102061; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    for (int i = 0; i < jmlhsmpl_2311102061; i++) {
        for (int j = 0; j < jmlhsmpl_2311102061; j++) {
            cout << "Silakan masukkan bobot antara simpul " << simpul[i] << " dan " << simpul[j] << ": ";
            cin >> busur[i][j];
        }
    }

    cout << "\nGraf yang dihasilkan:\n";
    cout << setw(15) << " ";
    for (int i = 0; i < jmlhsmpl_2311102061; i++) {
        cout << setw(15) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < jmlhsmpl_2311102061; i++) {
        cout << setw(15) << simpul[i];
        for (int j = 0; j < jmlhsmpl_2311102061; j++) {
            cout << setw(15) << busur[i][j];
        }
        cout << endl;
    }

    return 0;
}