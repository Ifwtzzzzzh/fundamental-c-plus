#include <iostream>
using namespace std;

void pascalTriangle (int numRows) {
	for (int i = 0; i < numRows; i++) {
		for (int l = 0; l <= i; l++) {
			int value = 1;
			for (int m = 0; m < l; m++) {
				value *= (i - m);
				value /= (m + 1);
			}
			cout << value << "    ";
		}
		cout << endl;
	}
}

int main() {
	pascalTriangle(10);
	return 0;
}
