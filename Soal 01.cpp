#include<iostream>
using namespace std;

int main() {

	int angka1, angka2;

	cout << "Masukan angka pertama = ";
	cin >> angka1;
	cout << "Masukan angka kedua = ";
	cin >> angka2;
	cout << endl;

	cout << "Hasil dari " << angka1 << " ditambah " << angka2 << " adalah = " << angka1 + angka2 << endl;
	cout << "Hasil dari " << angka1 << " dikurang " << angka2 << " adalah = " << angka1 - angka2 << endl;
	cout << "Hasil dari " << angka1 << " dikali " << angka2 << " adalah = " << angka1 * angka2 << endl;
	cout << "Hasil dari " << angka1 << " dibagi " << angka2 << " adalah = " << float(angka1) / float(angka2) << endl;
	cout << "Hasil dari " << angka1 << " modulus " << angka2 << " adalah = " << angka1 % angka2 << endl;

	return 0;

}