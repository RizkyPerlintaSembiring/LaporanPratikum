#include <iostream>
using namespace std;

//menggunakan struct
struct dewasiswa{
    string nama;
    string nim;
    string alamat;
};

//menggunakan class
class DataDiri {
    private:
        int umur;
        string jurusan;

    public:
        DataDiri(int _umur, string _jurusan){
            umur = _umur;
            jurusan = _jurusan;       
         }

    void display(){
        cout << "Umur : " << umur << endl;
        cout << "Jurusan : " << jurusan << endl;
    }


};


int main(){

    //menggunakan struct
    struct dewasiswa mahasiswa;
    mahasiswa.nama = "Rizky Perlinta Sembiring";
    mahasiswa.nim = "2311102061";
    mahasiswa.alamat = "Teluk";

    cout << "Data Mahasiswa" << endl;
    cout << "Nama Mahasiswa : " << mahasiswa.nama << endl;
    cout << "NIM : " << mahasiswa.nim << endl;
    cout << "Alamat : " << mahasiswa.alamat << endl;

    //menggunakan class
    DataDiri mhs(19, "Teknik Informatika");
    mhs.display();
    


    return 0;
}