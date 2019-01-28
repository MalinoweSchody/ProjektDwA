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

//Pobieranie danych od u¿ytkownika
cin >> wybor;
cout << "\n";

//Warunek wielokrotnego wyboru switch ... case
switch( wybor )
    {
    case 1: //Dodawanie
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 2: //Odejmowanie
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 3: //Mno¿enie
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 4: //Dzielenie
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 5: //Procêty
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 6: //Potêgi
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 7: //Silnia
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 8: //Pierwiastek
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 9: //Modulo
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 10: //Inkrementacja
    	//KOD POMIÊDZY CASE A BREAK
        break;
    case 11: //Dekrementacja
    	//KOD POMIÊDZY CASE A BREAK
        break;
    default: //Jest to domyœlna opcja która aktywuje siê, gdy u¿ytkownik wpiszê coœ poza nasz¹ opcj¹ (1-8)
      cout << "Prosze wybrac funkcje! (1-11)" << endl;
        break;
    }
	
	return 0;
}

//0.Odbieranie danych od u¿ytkownika, gdy bêdzie to wymagane

//NIE ZROBIONE [MŒ]- 1.Dodawanie: sk³adnik + sk³adnik = suma

//NIE ZROBIONE [MŒ]-2.Odejmowanie: Odjemna – odjemnik = ró¿nica

//NIE ZROBIONE [K¯]-3.Mno¿enie: Czynnik · czynnik = iloczyn

//NIE ZROBIONE [K¯]-4.Dzielenie: Dzielna : dzielnik = iloraz

//NIE ZROBIONE [K¯]-5.Obliczanie procentów, u¿ytkownik bêdzie mia³ do wyboru ró¿ne funkcje takie jak:
//a)Oblicz A % z B
//b)A jest jakim procentem z B
//c)O jaki procent wzros³a/zmala³a liczba? 
//z A do B ?
//d)Dodaj procent do liczby. 
//A + B %
//e)Odejmij procent od liczby. 
//A - B %

//NIE ZROBIONE [MŒ]-6.Potêgowanie – dzia³anie dwuargumentowe (n-ta potêga)

//NIE ZROBIONE [K¯]-7.Silnia liczby naturalnej n

//NIE ZROBIONE [MŒ]-8.Pierwiastek (n-ty pierwiastek)

//NIE ZROBIONE [K¯ + MŒ]- 9.Modulo (Czy zostanie reszta z dzielenia 2 liczb)

//NIE ZROBIONE [MŒ]- 10.Inkrementacja (zwiêkszenie wartoœci zmiennej o jeden)

//NIE ZROBIONE [K¯]- 11.Dekrementacja (zmniejszenie wartoœci zmiennej o jeden)

//12. Czytelne wypisywanie wyniku z funkcji dla u¿ytkownika

//50% [MŒ] - 50% [K¯]
