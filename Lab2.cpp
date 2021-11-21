#include <iostream>
#include <vector>
#include <time.h>
#include <Windows.h>

using namespace std;

int main()
{
    
    //ZADANIE 1
    /*
    int n, i = 0;
    float suma = 0, srednia, punkty;

    do {
        cout << "Podaj liczbe studentow: "; cin >> n;
    } while (n<=0);

    while (i < n) {
        cout << "Podaj liczbe punktow dla " << i + 1 << " studenta: ";
        cin >> punkty;

        suma += punkty;
        i++;
    }
    srednia = suma / n;
    cout << "Srednia punktow dla " << n << " studentow wynosi: " << srednia;
    */
    
    //ZADANIE 2
    /*
    int n, i = 0;
    float suma = 0, srednia, punkty;
    
    do {
        cout << "Podaj liczbe studentow: "; cin >> n;
    } while (n<=0);

    while (i < n) {
        cout << "Podaj liczbe punktow z przedzialu 0-100 dla " << i + 1 << " studenta: ";
        cin >> punkty;

        if (punkty < 0 || punkty > 100) {
            cout << "Podaj punkty z zakresu 0-100!!!" << endl;
            i--;
        }

        suma += punkty;
        i++;
    }
    srednia = suma / n;
    cout << "Srednia punktow dla " << n << " studentow wynosi: " << srednia;
    */
    
    //ZADANIE 3
    /*
    int n, i = 0;
    float suma = 0, srednia, punkty;
    
    do {
        cout << "Podaj liczbe studentow: "; cin >> n;
    } while (n<=0);

    while (true) {
        cout << "Podaj liczbe punktow z przedzialu 0-100 dla " << i + 1 << " studenta: ";
        cin >> punkty;

        if (punkty < 0 || punkty > 100) {
            cout << "Podaj punkty z zakresu 0-100!!!" << endl;
            continue;
        }

        suma += punkty;
        i++;
    }
    srednia = suma / n;
    cout << "Srednia punktow dla " << n << " studentow wynosi: " << srednia;
    */
    
    //ZADANIE 4
    /*
    int n[10];

    for (int i = 0; i < 10; i++) {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> n[i];
    }

    int suma_dodatnia = 0, suma_ujemna = 0;
    int ilosc_dodatnich = 0, ilosc_ujemnych = 0;

    for (int i = 0; i < 10; i++) {
        if (n[i] >= 0) {
            ilosc_dodatnich++;
            suma_dodatnia += n[i];
        }
        else {
            ilosc_ujemnych++;
            suma_ujemna += n[i];
        }
    }

    cout << "Ilosc liczb dodatnich: " << ilosc_dodatnich << endl;
    cout << "Suma liczb dodatnich: " << suma_dodatnia << endl;
    cout << endl;
    cout << "Ilosc liczb ujemnych: " << ilosc_ujemnych << endl;
    cout << "Suma liczb ujemnych: " << suma_ujemna << endl;
    */
    
    //ZADANIE 5
    /*
    int n, temp;
    int suma = 0;
    do {
        cout << "Podaj ciag liczb: "; cin >> n;
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        cout << "Podaj " << i + 1 << " liczbe ciagu: ";
        cin >> temp;
        if (temp % 2 == 0) suma += i;
    }

    cout << "Suma liczb parzystych: " << suma;
    */

    //ZADANIE 6
    
    int n, temp;
    int suma = 0;

    do {
        cout << "Podaj dlugosc ciagu liczb: "; cin >> n;
    } while (n <= 0);

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        temp = (rand() % 56) - 10;
        //cout << temp << endl;
        if (temp % 2 == 0) suma += temp;
    }

    cout << "Suma liczb parzystych: " << suma;
    
    return 0;
}
