#include <iostream>
using namespace std;

struct Menu {
	string nama;
	string kategori;
	double harga;
	int poin;
};

struct Member {
	string nama;
	int poin;
};

void printMenu() {
	Menu menu[] {
		{"Ayam Goreng", "Makanan", 15000, 10},
		{"Ayam Gulai", "Makanan", 15000, 10},
		{"Ayam Bakar", "Makanan", 15000, 10},
		{"Es Teh", "Minuman", 15000, 10},
		{"Es Cincau", "Minuman", 15000, 10},
		{"Es Campur", "Minuman", 15000, 10},
		{"Kentang Goreng", "Snack", 15000, 10},
		{"Kerupuk", "Snack", 15000, 10},
		{"Kemplang", "Snack", 15000, 10},
	};
	
	string daftar;
	
  for (int i = 1; i < 2; ++i) {
    for (int j = 1; j < 2; ++j) { 
      for (int k = 1; k < 4; ++k) {
      	switch (k) {
      		case 1 :
      			daftar = "=======Daftar Makanan======";
      			cout << daftar << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l+1;
					if (menu[l].kategori == "Makanan") {
						cout << temp << ". " << menu[l].nama << endl;
					}
				}
				break;
			case 2 :
      			daftar = "=======Daftar Minuman======";
      			cout << daftar << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l+1;
					if (menu[l].kategori == "Minuman") {
						cout << temp << ". " << menu[l].nama << endl;
					}
				}
				break;
			default :
      			daftar = "=======Daftar Snack======";
      			cout << daftar << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l+1;
					if (menu[l].kategori == "Snack") {
						cout << temp << ". " << menu[l].nama << endl;
					}
				}
				break;
		  }
      }
    }
  }
}

void pesanMakanan() {
	int nomorMenu, porsi;
	
	do {
		cout << "Silahkan Pilih Pesanan Anda : ";
		cin >> nomorMenu;
		
		cout << "Berapa Porsi : ";
		cin >> porsi;
	}
}

int main() {
	int pilih;
		
	cout << "Aplikasi Restaurant dengan Membership" << endl;
	cout << "1. Pesan Makanan" << endl;
	cout << "2. Lihat Promo" << endl;
	cout << "3. Cek Poin" << endl;
	cout << "3. Riwayat Pesanan" << endl;
	cout << "============" << endl;
	
	cout << "Pilih Layanan : ";
	cin >> pilih;
	
	switch (pilih) {
		case 1 :
			system("cls");
			printMenu();
	}
  	return 0;
}

