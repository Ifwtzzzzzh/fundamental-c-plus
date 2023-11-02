#include <iostream>

using namespace std;

int main()
{
     system("cls");

     int pilih, harga;
     cout << "===========Program Pemesanan==============" << endl;
     cout << "1. Makanan" << endl;
     cout << "2. Minuman" << endl;
     cout << "Masukan Pilihan Anda : ";
     cin >> pilih;

     cout << endl;

     switch (pilih)
     {
     case 1:
          int x;
          cout << "===========Menu Makanan==============" << endl;
          cout << "1. Nasi + Soto Ayam     : Rp. 20000" << endl;
          cout << "2. Nasi + Sop Iga       : Rp. 25000" << endl;
          cout << "2. Nasi + Rawon Daging  : Rp. 30000" << endl;
          cout << "Masukan Pilihan Anda : ";
          cin >> x;
          if (x == 1)
          {
               harga = 20000;
               cout << "Harga menu makanan 1 adalah Rp. " << harga << endl;
          }
          else if (x == 2)
          {
               harga = 25000;
               cout << "Harga menu makanan 2 adalah Rp. " << harga << endl;
          }
          else if (x == 3)
          {
               harga = 30000;
               cout << "Harga menu makanan 3 adalah Rp. " << harga << endl;
          }
          else
          {
               cout << "Pilihan Anda Tidak Ada" << endl;
          }
          break;

     case 2:
          int y;
          cout << "===========Menu Minuman==============" << endl;
          cout << "1. Es Teh Manis    : Rp. 5000" << endl;
          cout << "2. Es Jeruk Nipis  : Rp. 10000" << endl;
          cout << "Masukan Pilihan Anda : ";
          cin >> y;
          if (y == 1)
          {
               harga = 5000;
               cout << "Harga menu minuman 1 adalah Rp. " << harga << endl;
          }
          else if (y == 2)
          {
               harga = 10000;
               cout << "Harga menu minuman 2 adalah Rp. " << harga << endl;
          }
          else
          {
               cout << "Pilihan Anda Tidak Ada" << endl;
          }
          break;

     default:
          cout << "Pilihan Anda Tidak Ada" << endl;
          break;
     }

     cout << endl << "Program Selesai.";
}
