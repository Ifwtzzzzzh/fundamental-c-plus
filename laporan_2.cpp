#include <iostream>

using namespace std;

int main() {
	double a, b, result;
	int x, y, choose, resultModulus;
	
	string input1 = "Masukkan Nilai 1: ";
	string input2 = "Masukkan Nilai 2: ";
	string resultEnd = "Hasil: ";
	
	cout << "Daftar Operasi Aritmatika:" << endl;
	cout << "1. Penjumlahan:" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian:" << endl;
	cout << "4. Pembagian:" << endl;
	cout << "5. Modulus:" << endl;
	cout << "0. Keluar Program:" << endl;
	cout << "-----------------------------" << endl;
	
	cout << "Pilih Program Aritmatika:";
	cin >> choose;
	
	if (choose == 1) {
		cout << endl << "Penjumlahan:" << endl;
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> a;
		
		cout << "Masukkan Angka 2:" << endl;
		cin >> b;
		
		result = a + b;
		cout << resultEnd << a << " + " << b << " = " << result << endl;
	} else if (choose == 2) {
		cout << endl << "Pengurangan:" << endl;
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> a;
		
		cout << "Masukkan Angka 2:" << endl;
		cin >> b;
		
		result = a - b;
		cout << resultEnd << a << " - " << b << " = " << result << endl;
	} if (choose == 3) {
		cout << endl << "Perkalian:" << endl;
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> a;
		
		cout << "Masukkan Angka 2:" << endl;
		cin >> b;
		
		result = a * b;
		cout << resultEnd << a << " * " << b << " = " << result << endl;
	} if (choose == 4) {
		cout << endl << "Pembagian:" << endl;
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> a;
		
		cout << "Masukkan Angka 2:" << endl;
		cin >> b;
		
		result = a / b;
		cout << resultEnd << a << " / " << b << " = " << result << endl;
	} if (choose == 5) {
		cout << endl << "Modulus:" << endl;
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> x;
		
		cout << "Masukkan Angka 2:" << endl;
		cin >> y;
		
		resultModulus = x % y;
		cout << resultEnd << x << " % " << y << " = " << resultModulus << endl;
	} else {
		cout << "Program Selesai" << endl;
	}
	
	return 0;
}
