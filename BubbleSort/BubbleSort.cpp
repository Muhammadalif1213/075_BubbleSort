#include <iostream>
using namespace std;

int a[20];      
int n;

void input() {		 //procedur untuk input
	while (true) {	// Looping
		cout << "masukan banyaknya elemen pada array : ";	// Output ke layar
		cin >> n;		// input dari pengguna
		if (n <= 20)	// jika n kurang dari dari atau samadengan 20
			break;		// keluar dari loop
		else {			// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//output ke layar
		}
	}
	cout << endl;								// output baris Kosong
	cout << "===================" << endl;		// Output ke layar
	cout << "Masukan Elemen Array" << endl;		// Output ke layar
	cout << "===================" << endl;		// Output ke layar

	for (int i = 0; i < n; i++) {	// Looping  dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ":";	// Output ke layar
		cin >> a[i];					// Input dari pengguna
	}
}