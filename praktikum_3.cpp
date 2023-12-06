#include <iostream>

using namespace std;

int main() {
	// DATA TYPE
	double a, b, plus, minus;
	int choose;
	
	// OPERATOR LIST
	cout << "Silahkan Pilih Operasi Aritmatika" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Keluar Program" << endl;
	cout << "=================================" << endl;
	
	// INPUT DATA
	cout << "Masukkan Operator : ";
	cin >> choose;
	
	cout << "Masukkan nilai A : ";
	cin >> a;
	
	cout << "Masukkan nilai B : ";
	cin >> b;
	
	// IF ELSE STATEMENT
	if (choose == 1) {
		// PLUS
		plus = a + b;
		cout << endl << "Penjumlahan" << endl;
		cout << "Hasil dari " << a << " + " << b << " = " << plus;
	} else if (choose == 2) {
		// MINUS
		minus = a - b;
		cout << endl << "Pengurangan" << endl;
		cout << "Hasil dari " << a << " - " << b << " = " << minus;
	}  else if (choose == 3) {
		// MULTIPLY
		minus = a - b;
		cout << endl << "Pengurangan" << endl;
		cout << "Hasil dari " << a << " - " << b << " = " << minus;
	} else {
		cout << "Program Selesai ";
	}
}
