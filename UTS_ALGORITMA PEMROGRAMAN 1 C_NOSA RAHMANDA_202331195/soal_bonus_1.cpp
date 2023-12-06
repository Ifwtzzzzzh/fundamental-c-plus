#include <iostream>
using namespace std;

int main() {
	int choise;
	float value, balance = 500000;
	string no_tujuan;
	
	cout << "===== Program ATM =====" << endl; 
	cout << "1. Tarik Tunai" << endl;
	cout << "2. Transfer" << endl;
	cout << "3. Setoran Tunai" << endl; 
	cout << "4. Cek Saldo" << endl;
	cout << "=======================" << endl; 
	cout << "Pilihan Anda" << endl;
	cin >> choise; 
	
	system("cls"); 
	
	switch (choise) {
		case 1:
			cout << "Nominal Penarikan : " << endl; 
			cin >> value; 
			balance -= value; 
			cout << "Uang keluar : " << value << endl;
			cout << "sisa Saldo : " << balance << endl;
			break;
		
		case 2:
			cout << "Nomor rekening tujuan : " << endl; 
			cin >> no_tujuan; 
			cout << "Masukan Nominal : "; 
			cin >> value;
			balance -= value;
			cout << "Tujuan : " << no_tujuan << endl;
			cout << "Nominal : " << value << endl;
			cout << "sisa Saldo : " << balance << endl;
			break;
		
		case 3:
			cout << "Nominal Masuk : " << endl;
			cin >> value; 
			balance += value;
			cout << "Total saldo anda sekarang : " << balance << endl; 
			break;
			
		case 4:
			cout << "Saldo Anda Sekarang : " << balance << endl; 
			break;
		
		default:
			cout << "Masukan menu dengan sesuai ! " << endl; 
			main();
			break;
	}
	
	char no_stop;
	cout << "Ingin melakukan Transaksi lagi ? (y/n) "; 
	cin >> no_stop;
	
	if (no_stop == 'y' || no_stop == 'Y' ) {
		system("cls");
		main();
	} else {
		system("cls");
	}
	
	return 0;
}
