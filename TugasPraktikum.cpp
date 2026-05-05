#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    Kendaraan() {
        id = 0;
        nama = "Tidak diketahui";
    }

    Kendaraan(int i) {
        id = i;
        nama = "Tidak diketahui";
    }

    Kendaraan(string n) {
        id = 0;
        nama = n;
    }

    Kendaraan(int i, string n) {
        id = i;
        nama = n;
    }

    void tampilkan() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "---------------------------" << endl;
    }
};
