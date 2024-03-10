#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<int, string> IFB;
    IFB[0] = "Rizky";
    IFB[1] = "Yudish";
    IFB[2] = "Galih";
    IFB[3] = "Ibnu";
    IFB[4] = "Tsaqif";
    IFB[5] = "Thoriq";
    IFB[6] = "Arsyad";



    cout << "Nama siswa di kelas IF-B: " << IFB[0] << endl;
    cout << "Nama siswa di kelas IF-B: " << IFB[1] << endl;
    cout << "Nama siswa di kelas IF-B: " << IFB[2] << endl;
    cout << "Nama siswa di kelas IF-B: " << IFB[3] << endl;
    cout << "Nama siswa di kelas IF-B: " << IFB[4] << endl;
    cout << "Nama siswa di kelas IF-B: " << IFB[5] << endl;
    cout << "Nama siswa di kelas IF-B: " << IFB[6] << endl;

    return 0;
}