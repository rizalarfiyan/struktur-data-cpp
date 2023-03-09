#include <iostream>
using namespace std;

struct mahasiswa {
    string nama;
    string mataKuliah;
    int nilai;
};

int main() {
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cout << endl;

    mahasiswa mahasiswa[jumlahMahasiswa];
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan nama Mahasiswa: ";
        cin >> mahasiswa[i].nama;
        cout << "Masukkan nama mata kuliah: ";
        cin >> mahasiswa[i].mataKuliah;
        cout << "Masukkan nilai mahasiswa: ";
        cin >> mahasiswa[i].nilai;
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << ", Nilai Matakuliah " << mahasiswa[i].mataKuliah << " adalah = " << mahasiswa[i].nilai << endl;
    }

    return 0;
}