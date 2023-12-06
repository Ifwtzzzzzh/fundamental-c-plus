#include <iostream>
using namespace std;

void listProgram() {
	cout << "=========Program Apotek Sederhana=========" << endl;
	cout << "1. Lihat Obat" << endl;
	cout << "2. Diagnosa Penyakit" << endl << endl;
	
	cout << "Pilih Program ";
}

void listMedicine() {
	string medicineRespiratory[] = {"Innhaler", "Bronsolvan", "Symbicort", "Strepsil"};
	string medicineDigestive[] = {"Paracetamol", "Promag", "Polysilane"};
	string medicineNerve[] = {"Sangobion", "Diclofenac", "Gabapentin"};
	string categories[] = {"Penyakit Pernapasan", "Penyakit Pencernaan", "Penyakit Otot"};
	string ache;
	
  for (int i = 1; i < 2; ++i) {
    for (int j = 1; j < 2; ++j) { 
      for (int k = 1; k < 4; ++k) {
      	switch (k) {
      		case 1 :
      			ache = "=======Penyakit Pernapasan======";
      			cout << ache << endl;
      			for (int m = 0; m < sizeof(medicineRespiratory) / sizeof(medicineRespiratory[0]); ++m) {
    				cout << medicineRespiratory[m] << endl;
  				}
				break;
			case 2 :
      			ache = "=======Penyakit Pencernaan======";
      			cout << ache << endl;
      			for (int m = 0; m < sizeof(medicineDigestive) / sizeof(medicineDigestive[0]); ++m) {
    				cout << medicineDigestive[m] << endl;
  				}
				break;
			default :
      			ache = "=======Penyakit Syaraf======";
      			cout << ache << endl;
      			for (int m = 0; m < sizeof(medicineNerve) / sizeof(medicineNerve[0]); ++m) {
    				cout << medicineNerve[m] << endl;
  				}
				break;
		  }
      }
    }
  }
}

void diseaseDiagnosis() {
	int option, age; 
	cout << "=========Daftar Keluhan=========" << endl;
	cout << "1. Sakit Kepala" << endl;
	cout << "2. Perut Sakit" << endl;
	cout << "3. Tenggorokan Sakit" << endl;	
	cout << "4. Mual" << endl;
	cout << "5. Maag" << endl;
	cout << "6. Lemas" << endl;
	cout << "7. Batuk" << endl;
	cout << "8. Pilek" << endl;
	cout << "8. Asma" << endl;
	cin >> option;
	
	cout << "Masukkan Umur Anda" << endl;
	cin >> age;
	
	if (option == 1 || option == 3) {
		cout << "Anda Perlu Paracetamol" << endl;
		if (age <= 10) {
			cout << "Anda Masih Anak-Anak" << endl;
			cout << "Dosis 1x1" << endl;
		} else if (age >= 11 && age<= 18) {
			cout << "Anda Masih Remaja" << endl;
			cout << "Dosis 3x1" << endl;
		} else {
			cout << "Anda Sudah Dewasa" << endl;
			cout << "Dosis 3x1" << endl;
		}
	} else if (option == 2 || option == 5) {
		cout << "Anda Perlu Promag" << endl;
		if (age <= 10) {
			cout << "Anda Masih Anak-Anak" << endl;
			cout << "Dosis 1x1" << endl;
		} else if (age >= 11 && age <= 18) {
			cout << "Anda Masih Remaja" << endl;
			cout << "Dosis 3x1" << endl;
		} else {
			cout << "Anda Sudah Dewasa" << endl;
			cout << "Dosis 3x1" << endl;
		}
	} else if (option == 6) {
		cout << "Anda Perlu Sangobion" << endl;
		if (age <= 10) {
			cout << "Anda Masih Anak-Anak" << endl;
			cout << "Dosis 1x1" << endl;
		} else if (age >= 11 && age <= 18) {
			cout << "Anda Masih Remaja" << endl;
			cout << "Dosis 3x1" << endl;
		} else {
			cout << "Anda Sudah Dewasa" << endl;
			cout << "Dosis 3x1" << endl;
		}
	} else if (option == 7 || option == 8) {
		cout << "Anda Perlu Procold" << endl;
		if (age <= 10) {
			cout << "Anda Masih Anak-Anak" << endl;
			cout << "Dosis 1x1" << endl;
		} else if (age >= 11 && age <= 18) {
			cout << "Anda Masih Remaja" << endl;
			cout << "Dosis 3x1" << endl;
		} else {
			cout << "Anda Sudah Dewasa" << endl;
			cout << "Dosis 3x1" << endl;
		}
	} else {
		cout << "Obat Tidak Ada :(";
	}
}

void noYesOption() {
	string yOption;
	cout << "Apakah Anda Ingin Kembali? (y/n): ";
	
	cin >> yOption;
	if (yOption == "y"|| yOption == "Y") {
		system("cls");
		listProgram();
	} else {
		system("cls");
		cout << "Terima Kasih sudah Menggunakan Progam Kami :(";
	}
}

int main() {
	listProgram();
	
	int option;
	cout << "Pilih Program ";
	cin >> option;
	
	switch (option) {
		case 1 :
			system("cls");
			listMedicine();	
			noYesOption();
			break;
		case 2 :
			system("cls");
			diseaseDiagnosis();
			noYesOption();
			break;
		default :
			cout << "Mang Eak Ada Progam Ini :)";
	}	
  	return 0;
}

