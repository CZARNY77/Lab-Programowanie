#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
//Zadanie 1
/*
float Kolo(float r) {
    return (3.14 * pow(r, 2));
}

float Prostokat(float a, float b) {
    cout << "Pole prostokata: ";
    return a * b;
}

float Trojkat(float a, float h) {
    cout << "Pole trojkata: ";
    return (a * h) / 2;
}

float Szescian(float a) {
    cout << "Objetosc szescianu: ";
    return pow(a,3);
}

float Walec(float r, float h) {
    return Kolo(r) * h;
}

void Sprawdzanie(float &temp) {
    while (temp <= 0) {
        cout << "Liczba musi byc wieksza od 0, podaj jeszcze raz: "; cin >> temp;
    }
}

void Sprawdzanie(float& temp, float& temp2) {
    while (temp <= 0 && temp2<=0) {
        cout << "Liczby musza byc wieksza od 0, podaj jeszcze raz: " << endl;
        cout << "1: "; cin >> temp;
        cout << "2: "; cin >> temp2;
    }
}

int main()
{
    float temp, temp2;
    cout << "Podaj r dla kola: "; cin >> temp;
    Sprawdzanie(temp);
    cout << "Pole kola: " << Kolo(temp) << endl;

    cout << "Podaj bok a dla prostokata: "; cin >> temp;
    cout << "Podaj bok b dla prostokata: "; cin >> temp2;
    Sprawdzanie(temp, temp2);
    cout << "Pole prostokonta: " << Prostokat(temp, temp2) << endl;

    cout << "Podaj podstawe dla trojkata: "; cin >> temp;
    cout << "Podaj wysokosc dla trojkota: "; cin >> temp2;
    Sprawdzanie(temp, temp2);
    cout << "Pole trojkota: " << Trojkat(temp, temp2) << endl;

    cout << "Podaj bok a szescianu: "; cin >> temp;
    Sprawdzanie(temp);
    cout << "Objetosc szescianu: " << Szescian(temp) << endl;

    cout << "Podaj promien walca: "; cin >> temp;
    cout << "Podaj wysokosc walca: "; cin >> temp2;
    Sprawdzanie(temp, temp2);
    cout << "Objetosc walca: " << Walec(temp, temp2) << endl;
}*/
//Zadanie 2
/*
bool LiczbaPierwsza(int liczba) {
    int dzielniki = 0;
    for (int i = 1; i <= liczba; i++) {
        if (liczba % i == 0) dzielniki++;
    }
    if (dzielniki == 2) return true;
    else return false;
}

int main()
{
    int liczba;
    cout << "Podaj liczbe: "; cin >> liczba;
    if (LiczbaPierwsza(liczba)) cout << "Liczba jest pierwsza" << endl;
    else cout << "Liczba nie jest pierwsza" << endl;
}*/
//Zadanie 3
/*
void Przeliczanie(int liczba) {
    vector<int> binarna;

    while (liczba >= 1) {
        if (liczba % 2 == 0)    binarna.push_back(0);
        else binarna.push_back(1);
        liczba = liczba / 2;
    }
    for (int i = binarna.size()-1; i >= 0; i--) {
        cout << binarna[i];
    }
}

int main() {
    int liczba;
    cout << "Podaj liczbe: "; cin >> liczba;
    Przeliczanie(liczba);
}*/
//Zadanie 4

long long dwusilnia(int n) { // long long ponieważ dwusilnia z 30 nie miesciła się w long 
    long long m = 1;
    for (;n > 1;n -= 2)   m *= n;
    return m;
}

int main() {
    int n;
    do {
        cout << "Podaj n: "; cin >> n;
    } while (n < 0 || n > 30);
    cout << "dwusilnia: " << dwusilnia(n);
}