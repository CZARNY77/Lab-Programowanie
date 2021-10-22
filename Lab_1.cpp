#include <iostream>
#include <iostream>

using namespace std;

int main()
{
	// Zad 1
	string nr_albumu = "w66065";
	cout << "nr albumu: " << nr_albumu << endl;

	/*
	// Zad 2
	int a;
	cout << "Podaj liczbe: ", cin >> a;

	if (a % 2 == 0)	cout << "Liczba jest parzysta" << endl;
	else cout << "Liczba nie jest parzysta" << endl;

	// Zad 3
	float b, c;
	cout << "Podaj 1 liczbe: ", cin >> b;
	cout << "Podaj 2 liczbe: ", cin >> c;

	if (b > c) cout << "1 liczba jest wieksza" << endl;
	else if (b == c) cout << "liczby sa rowne" << endl;
	else if (b < c) cout << "2 liczba jest wieksza" << endl;*/

	// Zad 4 i 5
	float a, b, c, d;
	int v;

	cout << "Podaj a: ", cin >> a;
	cout << "Podaj b: ", cin >> b;
	cout << "Podaj c: ", cin >> c;
	cout << "Podaj d: ", cin >> d;
	cout << "---------MENU---------" << endl;
	cout << "1. Dodaj\n2. Odejmij\n3. Podziel\n4. Pomnoz\n5. Srednia\n";
	cout << "wybierz: ", cin >> v;
	switch (v)
	{
	case 1:
		cout << "Suma = " << a+b+d+c;
		break;
	case 2:
		cout << "Roznica = " << a - b - c - d;
		break;
	case 3:
		if (b != 0 || c != 0 || d != 0)
			cout << "Iloraz = " << a / b / c / d;
		else
			cout << "Nie mozna dzielic przez 0" << endl;
		break;
	case 4:
		cout << "Iloczyn = " << a * b * c * d;
		break;
	case 5:
		cout << "Srednia = " << (a + b + c + d)/4;
		break;
	default:
		cout << "Nie ma tego w menu";
		break;
	}
	cout << endl;
	cout << endl;
}