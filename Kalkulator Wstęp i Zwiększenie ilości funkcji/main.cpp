#include <iostream>

using namespace std;

int main(int argc, char** argv) {
int wybor;

cout << "Wybierz potrzebna Ci funkcje z podanych:\n";
cout << "1: Dodawanie\n";
cout << "2: Odejmowanie\n";
cout << "3: Mnozenie\n";
cout << "4: Dzielenie\n";
cout << "5: Procety (Az 5 funkcji!)\n";
cout << "6: Potegowanie\n";
cout << "7: Silnia liczby naturalnej\n";
cout << "8: Pierwiastek\n";
cout << "9: Modulo\n";
cout << "10: Inkrementacja\n";
cout << "11: Dekrementacja\n";
cout << "Wybierz funkcje! (1-11):";

//Pobieranie danych od u�ytkownika
cin >> wybor;
cout << "\n";

//Warunek wielokrotnego wyboru switch ... case
switch( wybor )
    {
    case 1: //Dodawanie
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 2: //Odejmowanie
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 3: //Mno�enie
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 4: //Dzielenie
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 5: //Proc�ty
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 6: //Pot�gi
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 7: //Silnia
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 8: //Pierwiastek
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 9: //Modulo
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 10: //Inkrementacja
    	//KOD POMI�DZY CASE A BREAK
        break;
    case 11: //Dekrementacja
    	//KOD POMI�DZY CASE A BREAK
        break;
    default: //Jest to domy�lna opcja kt�ra aktywuje si�, gdy u�ytkownik wpisz� co� poza nasz� opcj� (1-8)
      cout << "Prosze wybrac funkcje! (1-11)" << endl;
        break;
    }
	
	return 0;
}

//0.Odbieranie danych od u�ytkownika, gdy b�dzie to wymagane

//NIE ZROBIONE [M�]- 1.Dodawanie: sk�adnik + sk�adnik = suma

//NIE ZROBIONE [M�]-2.Odejmowanie: Odjemna � odjemnik = r�nica

//NIE ZROBIONE [K�]-3.Mno�enie: Czynnik � czynnik = iloczyn

//NIE ZROBIONE [K�]-4.Dzielenie: Dzielna : dzielnik = iloraz

//NIE ZROBIONE [K�]-5.Obliczanie procent�w, u�ytkownik b�dzie mia� do wyboru r�ne funkcje takie jak:
//a)Oblicz A % z B
//b)A jest jakim procentem z B
//c)O jaki procent wzros�a/zmala�a liczba? 
//z A do B ?
//d)Dodaj procent do liczby. 
//A + B %
//e)Odejmij procent od liczby. 
//A - B %

//NIE ZROBIONE [M�]-6.Pot�gowanie � dzia�anie dwuargumentowe (n-ta pot�ga)

//NIE ZROBIONE [K�]-7.Silnia liczby naturalnej n

//NIE ZROBIONE [M�]-8.Pierwiastek (n-ty pierwiastek)

//NIE ZROBIONE [K� + M�]- 9.Modulo (Czy zostanie reszta z dzielenia 2 liczb)

//NIE ZROBIONE [M�]- 10.Inkrementacja (zwi�kszenie warto�ci zmiennej o jeden)

//NIE ZROBIONE [K�]- 11.Dekrementacja (zmniejszenie warto�ci zmiennej o jeden)

//12. Czytelne wypisywanie wyniku z funkcji dla u�ytkownika

//50% [M�] - 50% [K�]
