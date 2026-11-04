#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {

	// zadanie 1

	/*	const int tableSize = 10;
		int tab[tableSize];
		cout << "Wprowadz 10 liczb calkowitych. " << endl;

		for (int i = 0; i < 10; i++) {
			cout << "Podaj liczbe nr " << i + 1 << ": ";
			cin >> tab[i];
		}
		cout << "Podane przez ciebie liczby w odwroconej kolejnosci: " << endl;
		for (int i = 9; i >= 0; i--) {
			cout << tab[i] << " ";
		}
	} */

	// zadanie 2
	/*
	int n;

	cout << "Podaj ile liczb potrzebujesz: ";
	cin >> n;
	int* table = new int[n];

	if (n < 0) {
		cout << "Liczba elementow musi byc wieksza od 0." << endl;
		return 0;
	}
	if (n > 0) {
		table[0] = 0;
		cout << table[0] << endl;
	}
	if (n > 1) {
		table[1] = 1;
		cout << table[1] << endl;
	}

	for (int i = 2; i < n; i++) {
		table[i] = table[i - 2] + table[i - 1];
		cout << table[i] << endl;
	}
	delete[] table;

	return 0;
}   */


// zadanie 3
	
/*	srand(time(NULL)); // inicjalizacja generatora liczb losowych

	// tworzenie i wypełnianie tablicy 10 losowymi liczbami
	int table[10];
	cout << "wylosowane elementy tablicy to: " << endl;
	for (int i = 0; i < 10; i++) { 
		table[i] = rand();
			cout << table[i] << " ";
	}
	cout << endl << endl;

	// obliczanie sumy i wartości średniej
	double suma = 0;
	for (int i = 0; i < 10; i++) {
		suma = suma + table[i];
	}

	double srednia = suma / 10;
	cout << "Wartosc sredniej wynosi " << srednia;

	// zliczanie elementów mniejszych od średniej
    int licznik_mniejszych = 0;
	for (int i = 0; i < 10; i++) {
		if (table[i] < srednia) {
			licznik_mniejszych++;
		}
	}
	cout << "Liczba elementow mniejszych od sredniej wynosi " << licznik_mniejszych <<  endl;

	// szukanie elementu najmniejszego i najwiekszego w tablicy
	int min = table[0];
	int max = table[0];

	for (int i = 1; i < 10; i++) {
		if (table[i] < min) {
			min = table[i];
		}
		if (table[i] > max) {
			max = table[i];
		}
	}
	cout << "Najmniejszy element (min): " << min << endl;
	cout << "Najwiekszy element (max): " << max << endl;
}*/

	
// zadanie 4 
int n;
const int tableSize = 10;
int tab[tableSize];
cout << "Podaj 10 elementow z przedziału [0, 10]. " << endl;
cin >> n;
for (int i = 0; i < n; i++) {
	cin >> tab[i];
	for (int i = n; i < 10; i++) {
		tab[i] = 0;
	}
}

cout << tab[i] << " ";
}

