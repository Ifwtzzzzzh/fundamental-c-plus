#include <iostream>
using namespace std;

int main() {
	// LETTER A
	int rows, columns;
	for (rows = 0; rows <= 6; rows++) {
		for (columns = 0; columns <= 5; columns++) {
			if (((columns == 1 || columns == 5) && rows != 0) ||
			((rows == 0 || rows == 3) && (columns > 1 && columns < 5))) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
