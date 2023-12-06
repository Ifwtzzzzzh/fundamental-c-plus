#include <iostream>

using namespace std;

int main() {
	// NESTED IF 
	int x = 3;
	int y = 5;
	
	if (x > y) {
		cout << "X Lebih besar dari Y" << endl;
		
		if (x > 15) {
			cout << "X juga Lebih besar dari 15" << endl;	
		} else {
			cout << "X Tidak besar dari 15" << endl;
		}
	} else {
		cout << "X Lebih besar dari Y" << endl;
	}
	
	cout << endl << "Program Selesai";
	
	return 0;
}
