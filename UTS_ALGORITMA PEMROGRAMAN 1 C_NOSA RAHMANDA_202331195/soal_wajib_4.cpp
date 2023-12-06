#include <iostream>
using namespace std;

int main() {
	double a, t, result;
	
	cout << "Menghitung Luas Segitiga." << endl;
	cout << "Masukkan Nilai Alas : ";
	cin >> a;
	cout << "Masukkan Nilai Tinggi : ";
	cin >> t;
	cout << "----------------------" << endl;
	
	result = (a * t) / 2;
	cout << "Luas Segitiga :  " << result;
	
	return 0;
}
