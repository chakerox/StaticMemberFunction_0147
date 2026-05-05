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

int main() {
    Kendaraan k1;                 
    Kendaraan k2(10);            
    Kendaraan k3("Motor");        
    Kendaraan k4(202, "Mobil");  

    cout << "Data Kendaraan:\n";
    k1.tampilkan();
    k2.tampilkan();
    k3.tampilkan();
    k4.tampilkan();

    return 0;
}