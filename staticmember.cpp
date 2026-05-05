#include<iostream>
using namespace std;

class Mahasiswa {

public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();  

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    } 
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printAll() {
    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
    cout << endl;
};

int main() {
    Mahasiswa mhs1("Khalid");
    Mahasiswa mhs2("Rifqi");
    Mahasiswa mhs3("Aisyah");
    Mahasiswa mhs4("Hanifah");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}