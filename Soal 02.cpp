#include<iostream>
using namespace std;

int main() {

	int input1, input2;

	cout << "Masukan input pertama = ";
	cin >> input1;
	cout << "Masukan input kedua = ";
	cin >> input2;
	cout << endl;

	if (input1 < 0 || input2 < 0) {
		cout << "Input tidak dikenali" << endl;
	} else if (input1 > 100 || input2 > 100) {
		cout << "Input tidak dikenali" << endl;
	} else {

		if (input1 < input2) {
			cout << "Input pertama lebih kecil dari input kedua" << endl;
		} else if (input1 > input2) {
			cout << "Input pertama lebih besar dari input kedua" << endl;
		} else if (input1 == input2) {
			cout << "Input pertama sama dengan input kedua" << endl;
		}

	}

	return 0;

}