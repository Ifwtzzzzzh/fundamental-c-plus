#include <iostream>
using namespace std;

int main() {
	string name, noted;
	int nim;
	double absen, daily, mid, last, result;
	
	cout << "Input Nama dan Nim." << endl;
	cout << "Masukkan Nama Anda	: ";
	cin >> name;
	cout << "Masukkan NIM Anda	: ";
	cin >> nim;
	cout << "----------------------" << endl;
	
	cout << "Input Nilai." << endl;
	cout << "Masukkan nilai kehadiran : ";
	cin >> absen;
	cout << "Masukkan nilai harian : ";
	cin >> daily;
	cout << "Masukkan nilai UTS : ";
	cin >> mid;
	cout << "Masukkan nilai UAS : ";
	cin >> last;
	cout << "----------------------" << endl;
	
	absen = absen * 10/100;
	daily = daily * 30/100;
	mid = mid * 30/100 ;
	last = last * 30/100;
	
	result = absen + daily + mid + last;
	
	if (result >= 78 && result <= 100) {
		noted = "Anda Mendapatkan A";
	} else if (result >= 70 && result <= 77) {
		noted = "Anda Mendapatkan B";
	} else if (result >= 65 && result <= 69) {
		noted = "Anda Mendapatkan C";
	} else if (result >= 59 && result <= 64) {
		noted = "Anda Mendapatkan D";
	} else if (result >= 50 && result <= 58) {
		noted = "Anda Mendapatkan E";
	} else {
		noted = "Anda Mendapatkan F";
	}
	
	cout << "Hasil Akhir." << endl;
	cout << "Nama : " << name << endl;
	cout << "NIM : " << nim << endl;
	cout << "Nilai Akhir : " << result << endl;
	cout << "Keterangan : " << noted << endl;
	
	return 0;
}
