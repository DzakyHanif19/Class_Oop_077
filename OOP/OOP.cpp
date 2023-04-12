#include <iostream>
using namespace std;

class mahasiswa {
private :
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "masukan NIM : ";
		cin >> nim;
		cout << "masukan Nama : ";
		cin >> nama;
		cout << "masukan Nilai : ";
	}
	void printData();
};

void mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNim :" << nim;
	cout << "\nNamanya :" << nama;
	cout << "\nNilai :" << nilai;
}

class mataKuliah {
private:
	string kode;
	string namaMk;
	int sks;
public:
	void inputmk() {
		cout << "\n\nMasukan kode mataKuliah :";
		cin >> kode;
		cout << "Masukan nama mataKuliah :";
		cin >> namaMk;
		cout << "Masukan sks :";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData mataKuliah";
		cout << "\nKode mataKuliah :" << kode;
		cout << "\nNama mataKuliah :" << namaMk;
		cout << "\nsks :" << sks;
	}
};

int main()
{
	mahasiswa mhs;
	mataKuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputmk();
	mk.tampil();
}