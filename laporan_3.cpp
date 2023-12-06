#include <iostream>
using namespace std;

int main() {
	cout << "=========LOOPING WHILE=========" << endl;
	int counter;
	while (counter < 5) {
		cout << counter << endl;
		counter++;
	}
	
	cout << "=========LOOPING DO WHILE=========" << endl;
	counter = 0;
	do {
		cout << counter << endl;
		counter++;
	} while (counter < 5);
	
	cout << "=========LOOPING FOR=========" << endl;
	for (counter = 0; counter < 5; counter++) {
		cout << counter << endl;
	}
		
	return 0;
}
