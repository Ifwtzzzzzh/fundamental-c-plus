#include <iostream>
using namespace std;

int main() {
	// LOOPING
	int counter = 0;
	do {
		cout << counter << endl;
		counter++;
	}
	while (counter < 5);
	
	for (int i = 0; i < 5; i++) {
		cout << endl;
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		for (int k = 5; k < i; k--) {
			cout << "*";
		}
	}
	
		
	return 0;
}
