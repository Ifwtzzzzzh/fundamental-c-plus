#include <iostream>
using namespace std;

int main(){
	int x = 5;
	int y = 2;
	int tambah = x+y;//melakukan penjumlahan
	int kurang = x-y;//melakukan pengurangan
	int bagi = x/y;//melakukan pembagian
	int kali = x * y;//melakukan perkalian
	int modulus = x % y; //menghasilkan sisa bagi dari x terhadap y
	int increment = ++x;//menambah nilai x sebanyak 1;
	int decrement = --y;//mengurangi nilai y sebanyak 1;
	
	
	cout<<"================OPERATOR================="<<endl;
	cout<<"Penjumlahan\t: "<<tambah<<endl;
	cout<<"Pengurangan\t: "<<kurang<<endl;
	cout<<"Bagi\t\t: "<<bagi<<endl;
	cout<<"Perkalian\t: "<<kali<<endl;
	cout<<"Modulus\t\t: "<<modulus<<endl;
	cout<<"Increment\t: "<<increment<<endl;
	cout<<"Decrement\t: "<<decrement<<endl;

	
	return 0;
}
