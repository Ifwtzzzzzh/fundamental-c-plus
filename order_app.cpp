#include <iostream>
using namespace std;

struct Menu {
	string nama;
	string kategori;
	double harga;
	int poin;
};

struct Pembayaran {
	string nama;
};

struct Pesanan {
	string nama;
	string kategori;
	double harga;
	int porsi;
};

void printMenuTanpaPoin() {
	Menu menu[] {
	  {"Ayam Goreng", "Makanan", 15000, 50},
	  {"Ayam Gulai", "Makanan", 17000, 50},
	  {"Ayam Bakar", "Makanan", 15000, 50},
	  {"Es Teh", "Minuman", 10000, 20},
	  {"Es Cincau", "Minuman", 10000, 20},
	  {"Es Campur", "Minuman", 10000, 20},
	  {"Kentang Goreng", "Snack", 15000, 20},
	  {"Kerupuk", "Snack", 15000, 20},
	  {"Kemplang", "Snack", 15000, 20},
	};
	
	string daftar;
	
	for (int i = 1; i < 2; ++i) {
		for (int j = 1; j < 2; ++j) {
			for (int k = 1; k < 4; ++k) {
      	switch (k) {
      		case 1 :
      			daftar = "=======Daftar Makanan======";
      			cout << daftar << endl;
      			cout << "Menu|Harga|Poin" << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l + 1;
					if (menu[l].kategori == "Makanan") {
						cout << temp << ". " << menu[l].nama << "|" << menu[l].harga << "|"  << endl;
					}
				}
				break;
			case 2 :
      			daftar = "=======Daftar Minuman======";
      			cout << daftar << endl;
      			cout << "Menu|Harga|Poin" << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l + 1;
					if (menu[l].kategori == "Minuman") {
						cout << temp << ". " << menu[l].nama << "|" << menu[l].harga << "|"  << endl;
					}
				}
				break;
			default :
      			daftar = "=======Daftar Snack======";
      			cout << daftar << endl;
      			cout << "Menu|Harga|Poin" << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l + 1;
					if (menu[l].kategori == "Snack") {
						cout << temp << ". " << menu[l].nama << "|" << menu[l].harga << "|"  << endl;
					}
				}
				break;
				}
    		}
  		}
	}
}

void printMenu() {
	Menu menu[] {
	  {"Ayam Goreng", "Makanan", 15000, 50},
	  {"Ayam Gulai", "Makanan", 17000, 50},
	  {"Ayam Bakar", "Makanan", 15000, 50},
	  {"Es Teh", "Minuman", 10000, 20},
	  {"Es Cincau", "Minuman", 10000, 20},
	  {"Es Campur", "Minuman", 10000, 20},
	  {"Kentang Goreng", "Snack", 15000, 20},
	  {"Kerupuk", "Snack", 15000, 20},
	  {"Kemplang", "Snack", 15000, 20},
	};
	
	string daftar;
	
	for (int i = 1; i < 2; ++i) {
		for (int j = 1; j < 2; ++j) {
			for (int k = 1; k < 4; ++k) {
      	switch (k) {
      		case 1 :
      			daftar = "=======Daftar Makanan======";
      			cout << daftar << endl;
      			cout << "Menu|Harga|Poin" << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l + 1;
					if (menu[l].kategori == "Makanan") {
						cout << temp << ". " << menu[l].nama << "|" << menu[l].harga << "|" << menu[l].poin << endl;
					}
				}
				break;
			case 2 :
      			daftar = "=======Daftar Minuman======";
      			cout << daftar << endl;
      			cout << "Menu|Harga|Poin" << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l + 1;
					if (menu[l].kategori == "Minuman") {
						cout << temp << ". " << menu[l].nama << "|" << menu[l].harga << "|" << menu[l].poin << endl;
					}
				}
				break;
			default :
      			daftar = "=======Daftar Snack======";
      			cout << daftar << endl;
      			cout << "Menu|Harga|Poin" << endl;
      			for (int l = 0; l < sizeof(menu) / sizeof(menu[0]); l++) {
					int temp = l + 1;
					if (menu[l].kategori == "Snack") {
						cout << temp << ". " << menu[l].nama << "|" << menu[l].harga << "|" << menu[l].poin << endl;
					}
				}
				break;
				}
    		}
  		}
	}
}

int poin;
void pesanMakanan() {
	char lanjut;
	int temp, nomorMenu, harga, porsi, singlePorsi, totalPorsi, totalHarga, finalHarga, metodePembayaran;
	int totalPesanan = 0;
	Pesanan pesanan[10];
	
	Menu menu[] {
	  {"Ayam Goreng", "Makanan", 15000, 50},
	  {"Ayam Gulai", "Makanan", 17000, 50},
	  {"Ayam Bakar", "Makanan", 15000, 50},
	  {"Es Teh", "Minuman", 10000, 20},
	  {"Es Cincau", "Minuman", 10000, 20},
	  {"Es Campur", "Minuman", 10000, 20},
	  {"Kentang Goreng", "Snack", 15000, 20},
	  {"Kerupuk", "Snack", 15000, 20},
	  {"Kemplang", "Snack", 15000, 20}
	};
	
	Pembayaran pembayaran[] {"Cash", "E-Money", "Bank"};
	
	do {
	  totalPesanan++;
	  cout << "Silahkan Pilih Pesanan Anda : ";
	  cin >> nomorMenu;
	  if (nomorMenu > sizeof(menu) / sizeof(menu[0])) {
	    cout << "Menu tidak tersedia" << endl;
	    break;
	  } else {
	  	pesanan[totalPesanan - 1].nama = menu[nomorMenu - 1].nama;
	  	pesanan[totalPesanan - 1].kategori = menu[nomorMenu - 1].kategori;
	  	pesanan[totalPesanan - 1].harga = menu[nomorMenu - 1].harga;	    
		cout << "Berapa Porsi : ";
	    cin >> porsi;
	    pesanan[totalPesanan - 1].porsi = porsi;
	    cout << "Apakah Anda ingin pesan lagi? (y/t) ";
	    cin >> lanjut;
	  }
	} while (lanjut == 'y' || lanjut == 'Y');
	
	system("cls");
	for (int i = 0; i < sizeof(pembayaran) / sizeof(pembayaran[0]); i++) {
		temp = i + 1;
		cout << temp << ". " << pembayaran[i].nama << endl;
	}
	cout << "Pilih metode pembayaran: ";
	cin >> metodePembayaran;
	
	system("cls");
	cout << "========Pesanan Anda========" << endl;
	for (int i = 0; i < totalPesanan; i++) {
		totalHarga = pesanan[i].porsi * pesanan[i].harga;
		finalHarga += totalHarga;
		poin = finalHarga / 10000;
		cout << "Pesanan ke-" << i + 1 << ": " << pesanan[i].nama << " (x" << pesanan[i].porsi << ") " << pesanan[i].harga << " = " << totalHarga << endl;
	}
	cout << "Total harga : Rp. " << finalHarga - 2 << endl;
	cout << "Metode pembayaran : " << pembayaran[metodePembayaran - 1].nama << endl;
	if (totalPesanan < 2) {
		cout << "Anda mendapat 0 poin." << endl;
	} else {
		cout << "Anda mendapat " << poin << " poin." << endl;	
	}
}

int claimPoin;
void tukarPoin() {
	int pilih, poinMenu;
	string pesanan;
	
	Menu menu[] {
	  {"Ayam Goreng", "Makanan", 15000, 50},
	  {"Ayam Gulai", "Makanan", 17000, 50},
	  {"Ayam Bakar", "Makanan", 15000, 50},
	  {"Es Teh", "Minuman", 10000, 20},
	  {"Es Cincau", "Minuman", 10000, 20},
	  {"Es Campur", "Minuman", 10000, 20},
	  {"Kentang Goreng", "Snack", 15000, 20},
	  {"Kerupuk", "Snack", 15000, 20},
	  {"Kemplang", "Snack", 15000, 20}
	};
	
	cout << "=====================" << endl;
	cout << "Poin anda sekarang: " << poin << endl;
	cout << "Pilih menu untuk tukar poin : ";
	if (claimPoin == pilih) {
		cout << "Anda sudah mengambil menu ini :(" << endl;
	}
	cin >> pilih;
	claimPoin = pilih;
	
	system("cls");
	if (pilih > sizeof(menu) / sizeof(menu[0])) {
	    cout << "Menu tidak tersedia" << endl;
	  } else {
	  	pesanan = menu[pilih - 1].nama;
	  	poinMenu = menu[pilih - 1].poin;
	  	if (claimPoin < poinMenu) {
	  		cout << "Poin anda tidak cukup" << endl;
		} else {
			claimPoin -= poinMenu;
			cout << "Selamat, poin berhasil digunakan" << endl;
			cout << pesanan << endl;
			cout << "Poin anda sekarang " << poin << endl;
		}
	}
}

int main() {
	int totalPoin;
	int pilih;
	char lanjutkan;
	string nama;
	
	cout << "Masukkan nama anda : ";
	cin >> nama;
	system("cls");
	
	do {
		cout << "Aplikasi Restaurant dengan Membership" << endl;
		cout << "1. Pesan Makanan" << endl;
		cout << "2. Cek Poin" << endl;
		cout << "3. Tukar Poin" << endl;
		cout << "============" << endl;
		
		cout << "Pilih Layanan : ";
		cin >> pilih;
		switch (pilih) {
			case 1 :
				system("cls");
				printMenuTanpaPoin();
				pesanMakanan();
				cout << "Apakah Anda ingin kembali? (y/t) ";
				cin >> lanjutkan;
				claimPoin += poin;
				cout << claimPoin << endl;
				system("cls");
				break;
			case 2 :
				system("cls");
				cout << "Nama : " << nama << endl;
				cout << "Total poin : " << totalPoin << endl;
				cout << "Apakah Anda ingin kembali? (y/t) ";
				cin >> lanjutkan;
				system("cls");
				break;
			case 3 :
				system("cls");
				printMenu();
				tukarPoin();
				cout << "Apakah Anda ingin kembali? (y/t) ";
				cin >> lanjutkan;
				system("cls");
				break;
			default :
				system("cls");
				cout << "Pilihan menu tidak ada :(" << endl;
				cout << "Apakah Anda ingin kembali? (y/t) ";
				cin >> lanjutkan;
				system("cls");
				break;
		}
	} while (lanjutkan == 'y' || lanjutkan == 'Y');
	cout << "Terima kasih telah menggunakan aplikasi kami :)";
	
	return 0;
}

