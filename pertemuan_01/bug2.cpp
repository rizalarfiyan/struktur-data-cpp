#include <iostream>
using namespace std;

int main() {
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cout << endl;

    string nama[100];
    string mataKuliah[100];
    int nilai[100];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan nama Mahasiswa: ";
        cin >> nama[i];
        cout << "Masukkan nama mata kuliah: ";
        cin >> mataKuliah[i];
        cout << "Masukkan nilai mahasiswa: ";
        cin >> nilai[i];
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << nama[i] << ", Nilai Matakuliah " << mataKuliah[i] << " adalah = " << nilai[i] << endl;
    }

    return 0;
}