#include <iostream>
#include <string>

using namespace std;

int main()
{
    //ZADANIE 3
    /*
    char tab[] = "wiosna";
    int i = 0;
    while (tab[i] != '\0') {
        i++;
    }
    cout << "liczba znakow w tablicy tab = " << i << endl;
    cout << "liczba znakow w tablicy tab = " << size(tab) << endl; // 7 ponieważ zlicza jeszcze znak \0
    */
    //ZADANIE 4
    /*
    string text, text2, copy;
    cout << "Podaj jakis tekst 1: "; getline(cin, text);
    cout << "Podaj jakis tekst 2: "; getline(cin, text2);
    copy = text;
    cout << "Tekst skopiowanego stringa 1: " << copy << endl;
    string text3 = text + " " + text2;
    cout << "Polaczenie dwoch tekstow: " << text3 << endl;
    cout << "Dlugosc polaczonych tekstow: " << text3.size();
    */
    //ZADANIE 5
    /*
    string adres, nr_domu;
    int ocena, staz;
    cout << "Podaj nazwe ulicy na ktorej mieszkasz: "; getline(cin, adres);
    cout << "Podaj nr domu: "; getline(cin, nr_domu);
    cout << "Na ile oceniasz swoje umietniosci programowania w sklai[2 - 5]: "; cin >> ocena;
    cout << "Twoj staz programistyczny [lata]: "; cin >> staz;
    cout << endl;
    cout << "Adres: " << adres + " " + nr_domu << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    if (staz == 1)   cout << "Staz: " << staz << " rok" << endl;
    else if (staz > 1 && staz <= 4)   cout << "Staz: " << staz << " lata" << endl;
    else if (staz == 0 || staz > 4)   cout << "Staz: " << staz << " lat" << endl;
    */
    //ZADANIE 6
    string text;
    int liczba_samoglosek = 0, liczba_spolglosek = 0;
    cout << "Podaj jakis tekst: "; getline(cin, text);
    for (int i = 0; i < text.size(); i++) {
        switch (text[i])
        {
        case 'a':
            liczba_samoglosek++;
            break;
        case 'e':
            liczba_samoglosek++;
            break;
        case 'i':
            liczba_samoglosek++;
            break;
        case 'o':
            liczba_samoglosek++;
            break;
        case 'u':
            liczba_samoglosek++;
            break;
        case 'y':
            liczba_samoglosek++;
            break;
        case ' ':
            break;
        default:
            liczba_spolglosek++;
            break;
        }
    }

    cout << "Liczba spolglosek: " << liczba_spolglosek << endl;
    cout << "Liczba samoglosek: " << liczba_samoglosek << endl;
}