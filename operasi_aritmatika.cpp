#include <iostream>

using namespace std;

int main()
{
     double a, b, hasil;
     int pilih;

     cout << "Daftar Operasi Aritmatika:" << endl;
     cout << "1. Penjumlahan" << endl;
     cout << "2. Pengurangan" << endl;
     cout << "0. Keluar Program" << endl;
     cout << "----------------------------------" << endl;

     cout << "Pilih operasi aritmatika : ";
     cin >> pilih;

     if (pilih == 1)
     {
          cout << endl
               << "Penjumlahan." << endl;
          cout << "Masukkan nilai 1 : ";
          cin >> a;
          cout << "Masukkan nilai 2 : ";
          cin >> b;

          hasil = a + b;
          cout << "Hasil penjumlahan nilai " << a << " + " << b << " = " << hasil;
     }
     else if (pilih == 2)
     {
          cout << endl
               << "Pengurangan." << endl;
          cout << "Masukkan nilai 1 : ";
          cin >> a;
          cout << "Masukkan nilai 2 : ";
          cin >> b;

          hasil = a - b;
          cout << "Hasil pengurangan nilai " << a << " - " << b << " = " << hasil;
     }
     else
     {
          cout << endl
               << "Program Selesai." << endl;
     }
}
