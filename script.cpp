/*

Kalkulator:
-dodawania
-odejmowania
-mno¿enia
-dzielenia
-potêgowania

*/

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

// tu dawaj resource

char tryb;
float liczba1;
float liczba2;
float wynik = 0;
string(test);


int main() // tu siê kodujê
{
	for (1; 1;)
	{
		cout << "MENU GLOWNE\n" << "+=-----------=+\n" << "1 - dodawanie\n" << "2 - odejmowanie\n" << "3 - mnozenie\n" << "4 - dzielenie\n" << "5 - potegowanie\n" << "6 - wyjscie\n";
		
		tryb = _getch();

		switch (tryb)
		{
		case '1':
		{
			cout << "dodawanie" << endl;
		}
		break;
		case '2':
		{
			cout << "odejmowanie" << endl;
		}
		break;
		case '3':
		{
			cout << "mno¿enie" << endl;
		}
		break;
		case '4':
		{
			cout << "dzielenie" << endl;
		}
		break;
		case '5':
		{
			cout << "potegowanie" << endl;
		}
		break;
		case '6':
		{
			exit(0);
		}
		default: cout << "Tego co chcesz niema\n\n";
		}

		cout << "liczba 1: ";
		cin >> liczba1;

		cout << "liczba 2: ";
		cin >> liczba2;

		system("cls");

		switch (tryb)
		{
		case '1':
		{
			wynik = liczba1 + liczba2;
			cout << "wynik: " << wynik << endl;
		}
		break;
		case '2':
		{
			wynik = liczba1 - liczba2;
			cout << "wynik: " << wynik << endl;
		}
			break;
		case '3':
		{
			wynik = liczba1 * liczba2;
			cout << "wynik: " << wynik << endl;
		}
			break;
		case '4':
		{
			if (liczba2 == 0) cout << "nie dzielimy przez 0\n\n";
			else
			{
				wynik = liczba1 / liczba2;
				cout << "wynik: " << wynik << endl;
			}
		}
			break;
		case '5':
		{
			wynik = pow(liczba1, liczba2);
			cout << "wynik: " << wynik << endl;
		}
			break;
		default: cout << "Tego co chcesz niema\n\n";
		}

		
	}
}