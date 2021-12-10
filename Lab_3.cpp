#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	//ZADANIE 1
	/*int tab[10];
	int temp = 3;
	for (int i = 0; i < 10; i++) {
		tab[i] = temp;
		temp += 3;
		cout << tab[i] << endl;
	}
	cout << endl;*/
	//ZADANIE 2
	/*
	int tab[10];
	int temp = 3;
	for (int i = 0; i < 10; i++) {
		tab[i] = temp;
		temp += 3;
		if(i%2!=0)
		cout << tab[i] << endl;
	}
	cout << endl;*/
	//ZADANIE 3
	/*
	int a, temp = 0;
	int tab[10];
	cout << "Podaj a: "; cin >> a;
	
	for (int i = 9; i >= 0; i--) {
		tab[i] = a - temp;
		temp += 5;
		cout << tab[i] << endl;
	}*/
	//ZADANIE 4
	/*
	int tab[10];
	int min;

	for (int i = 0; i < 10; i++) {
		tab[i] = rand() % 74 - 23;
		cout << tab[i] << " ";
		if (i == 0) min = tab[i];
		else if (min > tab[i]) min = tab[i];
	}
	cout << endl;
	cout << min;*/
	//ZADANIE 5
	/*
	int tab[10];
	tab[0] = rand() % 20+1;
	tab[1] = rand() % 20 + 1;
	for (int i = 2; i < 10; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];
	}

	for (int i = 0; i < 10; i++) {
		cout << tab[i] << endl;
	}*/
	//ZADANIE 6
	/*
	int tab[20];
	for (int i = 0; i < 10; i++) {
		tab[i] = rand() % 100 + 1;
		tab[i + 10] = tab[i];
		cout << "tab[" << i << "] = " << tab[i] << " -> tab[" << i + 10 << "] = " << tab[i + 10] << endl;
	}*/
	//ZADANIE 7
	int tab[5][5];
	int suma = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tab[i][j] = rand() % 10;
			cout << tab[i][j] << " ";
		}
		suma += tab[i][i];
		cout << endl;
	}
	cout << "Suma przekatnej = " << suma;
	//ZADANIE 8
	/*
	int tab[5][5];
	int tab2[5][5];
	int suma = 0;
	cout << "tab" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tab[i][j] = rand() % 10;
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	cout << "tab2" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tab2[i][j] = rand() % 10;
			cout << tab2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Suma tab i tab2" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << tab[i][j] + tab2[i][j] << " ";
		}
		cout << endl;
	}*/
	return 0;
}