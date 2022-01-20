#include <iostream>

using namespace std;

// Zad 1
void przeliczanie(int liczba) {

    if (liczba > 0)
    {
        przeliczanie(liczba / 2);
        cout << liczba % 2; 
    }
}
// Zad 2
int NWD(int n, int m) {
    
    if (m != 0) return NWD(m, n % m);

    return n;
}
// Zad 3
int fib(int liczba) {

    if (liczba <= 2) return 1;
    else return fib(liczba - 2) + fib(liczba - 1);
}
// Zad 4
int silnia(int liczba) {
    if (liczba == 1) return 1;
    if (liczba == 0) return 1;
    return silnia(liczba - 1) * liczba;
}

void silnia_i(int liczba) {
    int temp=1;
    for (int i = liczba; i > 0; i--) {
        temp *= i;
    }
    cout << temp << endl;
}
// Zad 5
float ciag(float n) {
    if (n == 1) return 1;
    else if (n == 2) return 0.5;
    return (-1*ciag(n - 1)) * ciag(n - 2);

}

int main()
{
    przeliczanie(5);
    cout << NWD(30, 16);
    cout << fib(6);
    cout << silnia(4) << endl;
    silnia_i(4);
    cout << ciag(6) << endl;
}