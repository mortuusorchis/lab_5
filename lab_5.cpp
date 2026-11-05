#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <vector>

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
	/*
	srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych
	const int tableSize = 10; // określenie maksymalnej liczby elementów tablicy
	int table[tableSize]; // utworzenie tablicy 10-elementowej

	//  wypełnianie tablicy 10 losowymi liczbami

	cout << "wylosowane elementy tablicy to: " << endl;
	for (int i = 0; i < tableSize; i++) {
		table[i] = rand(); // wylosowanie liczby i zapisanie jej w tablicy
			cout << table[i] << " ";
	}
	cout << endl << endl;

	// obliczanie sumy elementów i wartości średniej
	double suma = 0;
	for (int i = 0; i < tableSize; i++) {
		suma = suma + table[i]; // dodanie bieżącego elementu do sumy
	}

	double srednia = suma / tableSize; // obliczenie średniej arytmentycznej
	cout << "Wartosc sredniej wynosi " << srednia << endl;

	// zliczanie elementów mniejszych od średniej
	int licznik_mniejszych = 0;
	for (int i = 0; i < tableSize; i++) {
		if (table[i] < srednia) {
			licznik_mniejszych++;
		}
	}
	cout << "Liczba elementow mniejszych od sredniej wynosi " << licznik_mniejszych <<  endl;

	// szukanie elementu najmniejszego i najwiekszego w tablicy
	int min = table[0]; //Ustawienie początkowej wartości minimum na pierwszy element tablicy
	int max = table[0]; // Ustawienie początkowej wartości maksimum na pierwszy element tablicy

	for (int i = 1; i < tableSize; i++) {
		if (table[i] < min) {
			min = table[i]; // aktualizacja wartości minimalnej
		}
		if (table[i] > max) {
			max = table[i]; // aktualizacja wartości maksymalnej
		}
	}
	cout << "Najmniejszy element (min): " << min << endl;
	cout << "Najwiekszy element (max): " << max << endl;
} */


// zadanie 4 
/*

const int tableSize = 10; // określenie maksymalnej liczby elementów tablicy
int tab[tableSize]; // utworzenie tablicy 10-elementowej
int n; // liczba elementów podana przez użytkownika

cout << "Podaj liczbe elmentow z zakresu [0,10]:  " << endl;
cin >> n;

// Sprawdzenie, czy liczba elementów mieści się w zakresie od 0 do 10
if (n < 0 || n > tableSize) {
	cout << "Nieprawidlowa liczba elementow. " << endl;
	return 1;
}
for (int i = 0; i < n; i++) {
	cout << "Podaj liczbe nr" << i + 1 << ": " << endl; // Prośba o podanie kolejnych liczb
	cin >> tab[i];
}
for (int i = n; i < tableSize; i++) { // uzupełnienie nieużywanych elementów tablicy zerami
	tab[i] = 0;
}
double suma = 0.0;       // Deklaracja zmiennej suma i ustawienie jej wartości początkowej na 0
double min = tab[0];     // Ustawienie początkowej wartości minimum na pierwszy element tablicy
double max = tab[0];     // Ustawienie początkowej wartości maksimum na pierwszy element tablicy

for (int i = 0; i < tableSize; i++) {
	suma = suma + tab[i]; // dodanie bieżącego elementu do sumy

	if (tab[i] < min) {
		min = tab[i];  // aktualizacja wartości minimalnej
	}

	if (tab[i] > max) {
		max = tab[i]; // aktualizacja wartości maksymalnej
	}
}
double srednia = suma / tableSize; // obliczenie średniej arytmentycznej z podanych elementów tablicy
cout << endl << "Tablica: ";

for (int i = 0; i < tableSize; i++) {
	cout << tab[i] << " "; // wypisanie kolejnych elementów tablicy
}
cout << endl;    // wypisanie Sredniej, Minimum i maksimum i wartości odpowiednich zmiennych
cout << "Srednia: " << srednia << endl;
cout << "Minimum: " << min << endl;
cout << "Maksimum: " << max << endl;

return 0;
} */

// zadanie 5 
/*
	srand(time(NULL)); // inicjalizacja generatora liczb pseudolosowych

	const int tableSize = 10; // określenie maksymalnej liczby elementów tablicy
	int tab[tableSize]; // utworzenie tablicy 10 elementowej

	int SzczesliwaLiczba = rand() % 11; // wylosowanie szczęśliwej liczby z zakresu o 0 do 9
	cout << "Twoja szczesliwa liczba to " << SzczesliwaLiczba << endl;

	for (int i = 0; i < 10; i++) { // wylosowanie 10 losowych liczb z zakresu od 0 do 9
		tab[i] = rand() % 11;
		cout << tab[i] << " "; // wypisanie tych liczb
	}
	cout << endl << endl;

	int licznik = 0;
	for (int i = 0; i < tableSize; i++) { //zliczenie ile razy w tym ciągu 10 liczbowym pojawiła się moja szczęsliwa liczba
		if (tab[i] == SzczesliwaLiczba) {
			licznik++;
		}
	}
	cout << "Twoja szczesliwa liczba pojawia sie w ciagu " << licznik << " razy."  << endl;
	return 0;
} */

// zadanie 6 --> dodawanie macierzy kwadratowych
/*
const int rozmiar = 2; // okreslenie liczby wierszy i kolumn macierzy
int macierzA[rozmiar][rozmiar]{}; // utworzenie pierwszej macierzy 2x2
int macierzB[rozmiar][rozmiar]{}; // utworzenie drugiej macierzy 2x2
int suma[rozmiar][rozmiar]{}; // utworzenie macierzy przechowującej wynik sumy obu tych macierzy

// wczytywanie elementów pierwszej macierzy
cout << "Wpisz 4 liczb do pierwszej macierzy: " << endl;

for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		cin >> macierzA[i][j];
	}
}
// wczytywanie elementów drugiej macierzy
cout << "Wpisz 4 liczb do drugiej macierzy: " << endl;

for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		cin >> macierzB[i][j];
	}
}
// dodawanie odpowiednich elementów obu macierzy
for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		suma[i][j] = macierzA[i][j] + macierzB[i][j]; // obliczanie elementów macierzy wynikowej
	}
}

cout << "Suma macierzy: " << endl;

for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		cout << suma[i][j] << " ";

	}
	cout << endl;
}
return 0;
} */

// zadanie 7 -->mnożenie macierzy kwadratowych
/*
const int rozmiar = 2;
int macierzA[rozmiar][rozmiar]{};
int macierzB[rozmiar][rozmiar]{};
int iloczyn[rozmiar][rozmiar]{};

cout << "Wpisz 4 liczby do pierwszej macierzy. " << endl;

for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		cin >> macierzA[i][j];
	}
}

cout << "Wpisz 4 elementy do drugiej macierzy. " << endl;
for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		cin >> macierzB[i][j];
	}
}

// mnożenie macierzy A przez macierz B
for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		for (int k = 0; k < rozmiar; k++){
			iloczyn[i][j] = iloczyn[i][j] + (macierzA[i][k] * macierzB[j][k]); // obliczanie elementów macierzy wynikowej
		}
	}
}

cout << "Iloczyn macierzy: " << endl;

for (int i = 0; i < rozmiar; i++) {
	for (int j = 0; j < rozmiar; j++) {
		cout << iloczyn[i][j] << " ";

	}
	cout << endl;
}
return 0;
} */

// zadanie 8 
/*
	int rozmiar;
	cout << "Podaj rozmiar macierzy kwadratowej: " << endl;
	cin >> rozmiar;

	if (rozmiar <= 0) {
		cout << "Rozmiar macierzy musi byc wiekszy od 0 !" << endl;
		return 1;
	}
	// utrorzenie macierzy o rozmiarze podanym przez użytkownika
	vector<vector<int>> macierz(rozmiar,vector<int>(rozmiar)
	);

	cout << "Podaj elementy macierzy: " << endl;
	// Wczytytwanie elementów macierzy
	for (int i = 0; i < rozmiar; i++) {
		for (int j = 0; j < rozmiar; j++) {
			cin >> macierz[i][j];
		}
	}

	int sumaPrzekatnej = 0;
	// Sumowanie elemantów głównej przekątnej
	for (int i = 0; i < rozmiar; i++) {
		sumaPrzekatnej = sumaPrzekatnej + macierz[i][i];
	}
	cout << "Suma elementow glownej przekatnej: " << sumaPrzekatnej << endl;

	return 0;
} */

// zadanie 9
/*
const int tableSize = 10;// stała przechowująca rozmiar tablicy
int tab[tableSize]; // utworzenie tablicy 10-elementowej


cout << "Podaj 10 liczb calkowitych: " << endl;

for (int i = 0; i < tableSize; i++) {
	cout << "Podaj liczbe nr " << i + 1 << ": ";
	cin >> tab[i];
}
// sortowanie bąbelkowe
for (int i = 0; i < tableSize - 1; i++) {

	// Każda runda przesuwa największy element na koniec
	for (int j = 0; j < tableSize - 1 - i; j++) { // - i, bo po pierwszej rundzie największy element jest już na końcu
		if (tab[j] > tab[j + 1]) {
			swap(tab[j], tab[j + 1]);
		}
	}
}
cout << "Elementy tablicy posortowane w kolejnosci rosnacej: " << endl;

for (int i = 0; i < tableSize; i++) {
	cout << tab[i] << " ";
}
cout << endl;
return 0;
} */

// zadanie 10

	int macierz[8][8]{};

	srand(time(NULL));
	
	cout << "Macierz: " << endl;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			macierz[i][j] = rand() % 100;
			cout << macierz[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n Suma elementow wierszy: \n";

	for (int i = 0; i < 8; i++) {
		int sumaWiersza = 0;

		for (int j = 0; j < 8; j++) {
			sumaWiersza = sumaWiersza + macierz[i][j];
		}
        cout << "Wiersz " << i + 1 << ": " << sumaWiersza << endl;
	}
	cout << "\n Suma elementow kolumn: \n"; 

	for (int j = 0; j < 8; j++) {
		int sumaKolumn = 0;

		for (int i = 0; i < 8; i++) {
			sumaKolumn = sumaKolumn + macierz[i][j];
		}
		cout << "Kolumna " << j + 1 << ": " << sumaKolumn << endl;
	}

	int sumamacierzy = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			sumamacierzy = sumamacierzy + macierz[i][j];	
		}
	}
	cout << "\nSuma wszystkich elementow: " << endl;
	cout << sumamacierzy << endl;
    
}
