#include <iostream>
using namespace std;

int main() {
	string name;
	int nim, isOddEven;
	
	cout << "Program Ganjil Genap." << endl;
	cout << "Masukkan Nama Anda	:";
	cin >> name;
	cout << "Masukkan NIM Anda	:" ;
	cin >> nim;
	cout << "----------------------" << endl;
	
	isOddEven = nim % 2;
	switch (isOddEven) {
		case 1 :
			cout << "NIM saya berakhiran ganjil" << endl;
			break;
		default :
			cout << "Nim saya berakhiran genap" << endl;
			break;
	}
	
	return 0;
}
