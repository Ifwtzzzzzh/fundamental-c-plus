#include <iostream>
using namespace std;

int main() {
    string nama;

    cout << "Masukkan nama Anda: ";
    cin >> nama;

    cout << "Halo, " << nama << "! Selamat datang di AP 1 - C." << endl;

    return 0;
}

PERTUKARAN
#include <iostream>

using namespace std;

int main() {
    int A = 5;
    int B = 4;

    // Tampilkan nilai awal
    cout << "Sebelum pertukaran:" << endl;
    cout << "Nilai A: " << A << endl;
    cout << "Nilai B: " << B << endl;

    // Tukar nilai A dan B
    int temp = A;
    A = B;
    B = temp;

    // Tampilkan nilai setelah pertukaran
    cout << "\nSetelah pertukaran:" << endl;
    cout << "Nilai A: " << A << endl;
    cout << "Nilai B: " << B << endl;

    return 0;
}
