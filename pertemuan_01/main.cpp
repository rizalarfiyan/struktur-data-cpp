#include <iostream>
using namespace std;

struct program {
    char nama[50];
};

int main() {
    int namaStruktur;
    cout << " Dasar Struktur Data itu ada: ";
    cin >> namaStruktur;
    cout << endl;

    program program[namaStruktur];
    for (int i = 0; i < namaStruktur; i++) {
        cout << " Struktur data " << (i+1) << " = ";
        cin >> program[i].nama;
        cout << endl;
    }

    cout << endl;
    // system("pause");
    return 0;
}