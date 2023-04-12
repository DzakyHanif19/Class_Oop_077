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

class mataKuliah{};