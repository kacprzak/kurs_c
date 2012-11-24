// cw08-05
// Wersja C++
#include <iostream>
#include <cstdlib>
#include <string>

#define PI 3.1415926535897932384626433832795

using namespace std;

// Deklaracje funkcji
double podaj(const string& zacheta = "> ");
void pole_prostokata();
void pole_kola();
void pole_trojkata();

int main(void)
{

  while (1) {
    int option;

    cout << endl
         << "Siemanko. Co chcesz obliczyć?" << endl
         << "  1. Pole prostokąta" << endl
         << "  2. Pole koła" << endl
         << "  3. Pole trójkąta" << endl
         << "  4. Chcę wyjść z programu" << endl;

    option = podaj();

    switch (option) {
    case 1:
      pole_prostokata();
      break;
    case 2:
      pole_kola();
      break;
    case 3:
      pole_trojkata();
      break;
    case 4:
      cout << "Do zobaczyska!" << endl;
      exit(0); // Wyjście z programu
    default:
      cout << "Nie kumam. Wybierz jeszcze raz." << endl;
      break;
    }
  }
  return 0;
}

/**
 * Odpytuje aż użytkownik poda liczbę większą od zera.
 *
 * @param zacheta  napis wyświetlany przed polem w którym użytkownik
 *                 może wprowadzać znaki. Domyślnie "> " 
 * @returns        podaną przez użytkownika liczbę
 */
double podaj(const string& zacheta)
{
  double wartosc;
  bool error;
  do {
    error = false;
    cout << zacheta;
    cin >> wartosc;

    if (cin.fail()) {
      error = true;
      cin.clear();
      cin.ignore(80, '\n');
    } else if (wartosc <= 0) {
      error = true;
    }

    if (error) {
      cout << "Proszę wpisać liczbę nieujemną.\n";
    }
  } while (error);

  return wartosc;
}

void pole_prostokata()
{
  double a = podaj("Podaj a: ");
  double b = podaj("Podaj b: ");

  cout << "Pole prostokąta wynosi: " << a*b << endl;
}

void pole_kola()
{
  double r = podaj("Podaj r: ");

  cout << "Pole koła wynosi: " << PI*r*r << endl;
}

void pole_trojkata()
{
  double a = podaj("Podaj a: ");
  double h = podaj("Podaj h: ");

  cout << "Pole trójkąta wynosi: " << 0.5*a*h << endl;  
}
