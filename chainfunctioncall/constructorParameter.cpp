#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;

public:
    mahasiswa(int iNim, string iNama) {
        nim = iNim;
        nama = iNama;

        cout << "Constructor Dengan Parameter Terpanggil" << endl;
    }
};

int main() {
    mahasiswa mhs1(12345, "Andi");

    return 0;
}