#include <iostream>
#include <cstdlib>

using namespace std;

//Odwo³anie z funkcji 7 - silnii
int silnia (int liczba) {
 if (liczba<2) return liczba;
  return liczba*silnia(liczba-1);}
  
int main(int argc, char** argv) {
int a, b, wybor, wyborprocenty, x, y, wynik;

cout << "Witam w kalkulatorze Kacpra i Michala!\n\n Prosze podac liczbe \n A:";
cin >> a; //Pobieranie danych od u¿ytkownika
cout << "\n Liczbe \n B:";
cin >> b; //Pobieranie danych od u¿ytkownika

cout << "\nGratulacje uzytkowniku!\n";
cout << "Wybierz potrzebna Ci funkcje z podanych:\n";
cout << "1: Dodawanie\n";
cout << "2: Odejmowanie\n";
cout << "3: Mnozenie\n";
cout << "4: Dzielenie\n";
cout << "5: Procenty (Az 5 funkcji!)\n";
cout << "6: Potegowanie\n";
cout << "7: Silnia liczby naturalnej\n";
cout << "8: Pierwiastek\n";
cout << "9: Modulo\n";
cout << "10: Inkrementacja\n";
cout << "11: Dekrementacja\n";
cout << "Wybierz funkcje! (1-11):";

//Pobieranie wyboru funkcji od u¿ytkownika
cin >> wybor;
cout << "\n";
	  
//Warunek wielokrotnego wyboru switch ... case
switch( wybor )
    {
    case 1: //Dodawanie
    	//KOD POMIÊDZY CASE A BREAK Micha³ Œliwowski
        break;
        
    case 2: //Odejmowanie
    	//KOD POMIÊDZY CASE A BREAK Micha³ Œliwowski
        break;
        
    case 3: //Mno¿enie
    	cout << "Wynik pomnozenia liczby " << a << " z " << b << " wynosi: " << a*b;
        break;
        
    case 4: //Dzielenie
    	cout << "Wynik podzielenia liczby " << a << " z " << b << " wynosi: " << (float)a/(float)b;
    	cout << "\n Wowczas odwrotnie " << b << " z " << a << " wynosi: " << (float)b/(float)a;
        break;
        
    case 5: //Procenty
    cout << "Zaraz podasz X i Y, lecz najpierw wybierz potrzebna Ci funkcje z podanych:\n";
cout << "1: Oblicz X % z Y\n";
 cout << "2: X jest jakim procentem z Y\n";
  cout << "3: O jaki procent wzrosla/zmalala liczba? z X do Y?\n";
   cout << "4: Dodaj procent do liczby. X + Y%\n";
    cout << "5: Odejmnij procent od liczby. X - Y%\n";
 cout << "Wybierz funkcje! (1-5):";

cin >> wyborprocenty;
cout << "\n";

cout << "Podaj X: ";
cin >> x;
cout << "\n Podaj Y: ";
cin >> y;

switch( wyborprocenty ) //Kolejny wybór, ale tym razem do procentów (Wewnêtrzny)
    {
    case 1:
    	wynik = (float)x / 100 * (float)y;
      cout << "Wybrales: Oblicz " << x <<"% z " << y << "   Wynik = " << wynik;
        break;
        
    case 2:
    	wynik = (float)x/(float)y*100;
      cout << "Wybrales: " << x <<" jest jakim procentem z " << y << "   Wynik = " << wynik ;
        break;
        
    case 3:
    	wynik = ((float)y-(float)x)/(float)x*100;
      cout << "Wybrales: O jaki procent wzrosla/zmalala liczba? \n z " << x <<" do " << y << "? \n Wynik = " << wynik <<"%";
        break;
        
    case 4:
    	wynik = (float)x+((float)y/100*(float)x);
      cout << "Wybrales: Dodaj procent do liczby. \n" << x <<" + " << y << "%   Wynik = " << wynik;
        break;
        
    case 5:
    	wynik = (float)x-((float)y/100*(float)x);
      cout << "Wybrales: Odejmij procent od liczby. \n" << x <<" - " << y << "%   Wynik = " << wynik;
        break;
        
    default: //Jest to domyœlna opcja która aktywuje siê, gdy u¿ytkownik wpiszê coœ poza nasz¹ opcj¹ (1-5)
      cout << "Prosze wybrac funkcje procentow! (1-5)" << endl;
        break;
    }
        break;
        
    case 6: //Potêgi
    	//KOD POMIÊDZY CASE A BREAK Micha³ Œliwowski
        break;
        
    case 7: //Silnia
	  	cout << "Silnia z " << a << " wynosi: " << silnia(a) << endl;
	  	cout << "Silnia z " << b << " wynosi: " << silnia(b) << endl;

        break;
        
    case 8: //Pierwiastek
    	//KOD POMIÊDZY CASE A BREAK Micha³ Œliwowski
        break;
        
    case 9: //Modulo
    	    cout << a <<" modulo " << b << " = "<< a % b << endl;
    	    cout << b <<" modulo " << a << " = "<< b % a << endl;
        break;
        
    case 10: //Inkrementacja
    	//KOD POMIÊDZY CASE A BREAK Micha³ Œliwowski
        break;
        
    case 11: //Dekrementacja
       a--; b--;
		  cout << "Liczba pierwsza po dekrementacji wyglada nastepujaco: " << a 
		                                  << "\n Liczba druga natomiast: " << b;
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

//ZROBIONE [K¯]-3.Mno¿enie: Czynnik · czynnik = iloczyn

//ZROBIONE [K¯]-4.Dzielenie: Dzielna : dzielnik = iloraz

//ZROBIONE [K¯]-5.Obliczanie procentów, u¿ytkownik bêdzie mia³ do wyboru ró¿ne funkcje takie jak:
//a)Oblicz A % z B
//b)A jest jakim procentem z B
//c)O jaki procent wzros³a/zmala³a liczba? 
//z A do B ?
//d)Dodaj procent do liczby. 
//A + B %
//e)Odejmij procent od liczby. 
//A - B %

//NIE ZROBIONE [MŒ]-6.Potêgowanie – dzia³anie dwuargumentowe (n-ta potêga)

//ZROBIONE [K¯]-7.Silnia liczby naturalnej n

//NIE ZROBIONE [MŒ]-8.Pierwiastek (n-ty pierwiastek)

//ZROBIONE [K¯ + MŒ]- 9.Modulo (Czy zostanie reszta z dzielenia 2 liczb)

//NIE ZROBIONE [MŒ]- 10.Inkrementacja (zwiêkszenie wartoœci zmiennej o jeden)

//ZROBIONE [K¯]- 11.Dekrementacja (zmniejszenie wartoœci zmiennej o jeden)

//12. Czytelne wypisywanie wyniku z funkcji dla u¿ytkownika

//50% [MŒ] - 50% [K¯]
