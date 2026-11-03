#include <iostream>
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
	/*int n;

	cout << "Podaj ile liczb potrzebujesz: ";
	cin >> n;
	int* table = new int[n];

	tab[0] = 0;
	tab[1] = 1;

	for (int i = 2; i < n; i = i++) {
		table[i] = [i - 2] + [i - 1];

		cout << table[i] << endl;
	}
	return 0;
} */


// zadanie 3

/*	int n = rand() %
	
	int* table = new int[n];
	 

}*/









// zadanie 4 
int n;
const int tableSize = 10;
int tab[tableSize];
cout << "Podaj 10 elementow z przedziału [0, 10]. " << endl;
cin >> n;
for (int i = 0; i < n; i++) {
	cin >> tab[i];
}
for (int i = n; i < 10; i++) {
	 tab[i] = 0 ;
}
}

