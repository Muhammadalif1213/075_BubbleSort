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
void bubbleSortArray() {	// prosedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {		// looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {	// looping dengan J dimulai dari 0 hingga n-i
			if (a[j] > a[j + 1]) {			// jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];			// simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];			// assign nilai a[j + 1] ke a[j]
				a[j + 1] = temp;			// assign nilai temp ke a[j + 1]
			}
		}
	}
}

void unsorted() {
	cout << endl;								//outpu baris kosong
	cout << "==================================" << endl;	//output ke layar
	cout << "Element Array yang belum tersusun" << endl;	//output ke layar
	cout << "==================================" << endl;	//output ke layar
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;		//output ke layar
	}
	cout << endl;
}

void display() {
	cout << endl;								// output baris kosong
	cout << "======================================" << endl;	//output ke layar
	cout << "Element arraay yang telah di tersusun" << endl;		//output ke layar
	cout << "======================================" << endl;	//output ke layar
	for (int j = 0; j < n; j++) {				//looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;					// output ke layar
	}
	cout << endl;								// output baris kosong
}

int main() {
	input();			//memanggil procedur input()
	unsorted();			//Memanggil procedur unsorted()
	bubbleSortArray();	//Memanggil procedur bubbleSortArray()
	display();		//Memanggil procedur display()
	return 0;
}