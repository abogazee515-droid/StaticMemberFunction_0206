#include <iostream>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;
    
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);

};

mahasiswa::mahasiswa() {
}

mahasiswa::mahasiswa(int iNim) {
    nim = iNim;
}

mahasiswa::mahasiswa(string iNama) {
    nama = iNama;
}

int main (){



}