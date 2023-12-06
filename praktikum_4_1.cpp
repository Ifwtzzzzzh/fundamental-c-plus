#include <iostream>

using namespace std;

int main() {
	// NESTED IF 2
	int umur;
	
	cout << "Masukkan Umur Anda: ";
	cin >> umur;
	
	if (umur <= 18) {
		if (umur <= 10) {
			cout << "Anda Masih Anak-Anak" << endl;	
		} else {
			cout << "Anda Sudah Remaja" << endl;
		}
	} else {
		if (umur > 18 && umur <= 50) {
			cout << "Anda Sudah Dewasa" << endl;
		} else if (umur > 50 && umur <= 100) {
			cout << "Anda Sudah Lansia" << endl;
		} else {
			cout << "Hidup Abadi";
		}
	}
	
	return 0;
}
