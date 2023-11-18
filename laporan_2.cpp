#include <iostream>

using namespace std;

int main() {
	double a, b, result;
	int x, y, choose, resultModulus, resultOddEven;
	
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
		resultOddEven = result;
		cout << resultEnd << a << " + " << b << " = " << resultOddEven << endl;
		
//		=========== ODD EVEN VALIDATION USING IF ELSE CONDITION ===========
//		if (resultOddEven % 2 == 1) {
//			cout << "Hasil adalah Bilangan Ganjil" << endl;
//		} else {
//			cout << "Hasil adalah Bilangan Genap" << endl;
//		}

//		=========== ODD EVEN VALIDATION USING SWITCH CASE ===========
//		resultOddEven = resultOddEven % 2;
//		switch (resultOddEven) {
//			case 1:
//				cout << "Hasil adalah Bilangan Ganjil" << endl;
//				break;
//			default:
//				cout << "Hasil adalah Bilangan Genap" << endl;
//		}
	} else if (choose == 2) {
		cout << endl << "Pengurangan:" << endl;		
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> a;
		cout << "Masukkan Angka 2:" << endl;
		cin >> b;
		
		result = a - b;
		resultOddEven = result;
		cout << resultEnd << a << " - " << b << " = " << resultOddEven << endl;
		
//		=========== ODD EVEN VALIDATION USING IF ELSE CONDITION ===========
//		if (resultOddEven % 2 == 1) {
//			cout << "Hasil adalah Bilangan Ganjil" << endl;
//		} else {
//			cout << "Hasil adalah Bilangan Genap" << endl;
//		}

//		=========== ODD EVEN VALIDATION USING SWITCH CASE ===========
//		resultOddEven = resultOddEven % 2;
//		switch (resultOddEven) {
//			case 1:
//				cout << "Hasil adalah Bilangan Ganjil" << endl;
//				break;
//			default:
//				cout << "Hasil adalah Bilangan Genap" << endl;
//		}
	} else if (choose == 3) {
		cout << endl << "Perkalian:" << endl;
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> a;
		cout << "Masukkan Angka 2:" << endl;
		cin >> b;
		
		result = a * b;
		resultOddEven = result;
		cout << resultEnd << a << " * " << b << " = " << resultOddEven << endl;
		
//		=========== ODD EVEN VALIDATION USING IF ELSE CONDITION ===========
//		if (resultOddEven % 2 == 1) {
//			cout << "Hasil adalah Bilangan Ganjil" << endl;
//		} else {
//			cout << "Hasil adalah Bilangan Genap" << endl;
//		}

//		=========== ODD EVEN VALIDATION USING SWITCH CASE ===========
//		resultOddEven = resultOddEven % 2;
//		switch (resultOddEven) {
//			case 1:
//				cout << "Hasil adalah Bilangan Ganjil" << endl;
//				break;
//			default:
//				cout << "Hasil adalah Bilangan Genap" << endl;
//		}
	} else if (choose == 4) {
		cout << endl << "Pembagian:" << endl;
		
		cout << "Masukkan Angka 1:" << endl;
		cin >> a;
		cout << "Masukkan Angka 2:" << endl;
		cin >> b;
		
		result = a / b;
		resultOddEven = result;
		cout << resultEnd << a << " / " << b << " = " << resultOddEven << endl;
		
//		=========== ODD EVEN VALIDATION USING IF ELSE CONDITION ===========
//		if (resultOddEven % 2 == 1) {
//			cout << "Hasil adalah Bilangan Ganjil" << endl;
//		} else {
//			cout << "Hasil adalah Bilangan Genap" << endl;
//		}

//		=========== ODD EVEN VALIDATION USING SWITCH CASE ===========
//		resultOddEven = resultOddEven % 2;
//		switch (resultOddEven) {
//			case 1:
//				cout << "Hasil adalah Bilangan Ganjil" << endl;
//				break;
//			default:
//				cout << "Hasil adalah Bilangan Genap" << endl;
//		}
		
	} else if (choose == 5) {
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
