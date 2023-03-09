#include <iostream>
using namespace std;

int main() {
    //! Deklarasi salah
    // int a, n:
    // temp:
    int a, b, temp;

    cout << "Nilai cariabel A dan B Sebelum ditukar: \nA = ";
    cin >> a;
    //! Untuk cout, tipe data yang digunakan adalah string (petik dua) bukan dengan char (petik satu)
    // cout << 'B = ';
    cout << "B = ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    //! Hasil variabel yang ditampilkan tidak sesuai dengan perintah
    // cout << "\nNilai variable A dan B Setelah ditukar: \nA = " << b << "\nB = " << b << endl;
    cout << "\nNilai variable A dan B Setelah ditukar: \nA = " << a << "\nB = " << b << endl;
    return 0;
}