#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int b = 2;
	double x = a;
	double y = b;
	string result = "Hasil : ";
	
	int plus = a + b;
	int minus = a - b;
	int multiply = a * b;
	double divider = x / y;
	// MODULUS MUS INT NOT DOUBLE
	int modulus = a % b;
	
	cout << "====== Operasi Artimatika ======" << endl;
	cout << result << plus << endl;
	cout << result << minus << endl;
	cout << result << multiply << endl;
	cout << result << divider << endl;
	cout << result << modulus << endl;
	
	return 0;
}
