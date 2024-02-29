#include <iostream>
#include <string>

using namespace std;


void Output(string a, char b, int c) {
	cout << "Nama karyawan: " << a<< endl;
	cout << "Golongan Karyawan: " << b << endl;
	cout << "Total Gaji Karyawan:  " << c << endl;
}


int main()
{

	/*cout << "## Program menghitung tarif parkir ## soal 1" << endl;
	cout << "============================================" << endl;

	int jam = 24;
	int jam_masuk;
	int jam_keluar;
	int biaya;

	cout << "Jam masuk(format 24 jam): " << endl;
	cin >> jam_masuk;

	cout << "jam keluar (format 24 jam): " << endl;
	cin >> jam_keluar;

	jam_keluar - jam_masuk * 5 = biaya;*/

	string Nama;
	char Golongan;
	int jam_kerja;
	int uang_lembur;
	int upah;
	int upah_perjam;
	int total_upah;

	cout << "Nama karyawan: ";
	getline(cin, Nama);

	cout << "Golongan karyawan: ";
	cin >> Golongan;

	cout << "Jam kerja: ";
	cin >> jam_kerja;


	/*switch (Golongan) {
	case 'A':
		upah_perjam = 5000;
		break;
	case 'B':
		upah_perjam = 7000;
		break;
	case 'C':
		upah_perjam = 8000;
		break;
	case 'D':
		upah_perjam = 10000;
		break;
	default:
		upah_perjam = 0;
		break;
	}*/
	
	if ((Golongan == 'A') || ( Golongan == 'a')) {
		upah_perjam = 5000;
	}
	else if ((Golongan == 'B') || (Golongan == 'b')) {
		upah_perjam = 7000;
	}
	else if ((Golongan == 'C') || (Golongan == 'c')) {
		upah_perjam = 8000;
	}
	else if ((Golongan == 'D') || (Golongan == 'd')) {
		upah_perjam = 10000;
	}
	else {
		cout << "Golongan Tidak Terdapat Dalam DataBase" << endl;
	}
	upah = jam_kerja * upah_perjam;


	if (jam_kerja > 48) {
		uang_lembur = (jam_kerja - 48) * 4000;
	}
	else
	{
		uang_lembur = 0;
	}

	total_upah = upah + uang_lembur;
	
	system("cls");
	cout << "Nama: " << Nama << endl;
	cout << "Gaji: " << total_upah << endl;


	 /*string a = Nama;
	 int b = Golongan;
	 int c = total_upah;

	 Output(a, b, c);*/


	return 0;

}