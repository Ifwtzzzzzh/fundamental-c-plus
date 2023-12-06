#include <iostream>

using namespace std;

int main() {
	int A = 5;
	int B = 4;
	
	// TAMPILKAN NILAI AWAL
	cout << "=====Sebelum Pertukaran=====" << endl;
	cout << "Nilai A = " << A << endl;
	cout << "Nilai B = " << B << endl;
	
	// TUKAR NILAI A DAN NILAI B
	int temp = A;
	A = 4;
	B = temp;
	
	// TAMPILKAN NILAI SETELAH PERTUKARAN
	cout << "=====Sesudah Pertukaran=====" << endl;
	cout << "Nilai A = " << A << endl;
	cout << "Nilai B = " << B << endl;
	
	return 0;
}
