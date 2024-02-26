#include <iostream>

using namespace std;

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

	cout << "Nama karyawan: " << endl;
	cin >> Nama;

	cout << "Golongan karyawan: " << endl;
	cin >> Golongan;

	cout << "Jam kerja: " << endl;
	cin >> jam_kerja;


	switch (Golongan) {
	case 'A':
		upah_perjam = 5.000;
		break;
	case 'B:':
		upah_perjam = 7.000;
		break;
	case 'C':
		upah_perjam = 8.000;
		break;
	case 'D':
		upah_perjam = 10.000;
		break;
	default:
		upah_perjam = 0;
		break;
	}
	
	upah = jam_kerja * upah_perjam;


	if (jam_kerja > 48) {
		uang_lembur = (jam_kerja - 48) * 4.000;
	}
	else
	{
		uang_lembur = 0;
	}

	total_upah = upah * uang_lembur;
	
	cout << "Nama: " << Nama << endl;
	cout << "Gaji: " << total_upah << endl;


	return 0;

}