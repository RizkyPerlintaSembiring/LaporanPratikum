#include <stdio.h>

struct mahasiswa
{
    const char *name;
    const char *address;
    int  age;
};

int main()
{
    struct mahasiswa mhs1, mhs2;
    mhs1.name = "Rizky";
    mhs1.address = "Langkat";
    mhs1.age = 19;
    mhs2.name = "Perlinta";
    mhs2.address = "Medan";
    mhs2.age = 20;                                                       

    printf("## mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n",mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}