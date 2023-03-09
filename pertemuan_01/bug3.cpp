#include <iostream>
using namespace std;

int main() {
    int nilaiArray[] = {21, 25, 75, 80};
    //! Tidak perlu, karena sudah dideklarasikan di dalam perulangan (for)
    // int i = 0;

    //! Hapus titik koma di akhir perulangan:
    // for (int i = 0; i < 4; i++);
    for (int i = 0; i < 4; i++)
    {
        cout << "Array ke #" << (i+1) << " = " << nilaiArray[i] << endl;
    }

    cout << endl;

    //! Command "pause" not support in Ubuntu, only support in windows
    // system("pause");
    return 0;
}