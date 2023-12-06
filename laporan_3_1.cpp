#include <iostream>
using namespace std;

int main() {
	cout << "=========INFINITE LOOPING WHILE=========";
	int number, sum;
	while (number) {
		cout << endl << "Masukkan Angka : ";
		cin >> number;
		sum += number;
		cout << "Total adalah  " << sum << endl;
	}
	
	return 0;
}
