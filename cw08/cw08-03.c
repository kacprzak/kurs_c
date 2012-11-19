// cw08-03
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Deklaracja funkcji
int rownanie_kwadratowe(double a, double b, double c, double *x1, double *x2);

int main(int argc, char **argv)
{
  puts("Program obliczający pierwiastki równania kwadratowego.");

  if (argc < 4) {
    puts("Wymagane są trzy argumenty!");
    return -1;
  }

  // Dla postaci ax^2 + bx + c = 0
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);

  if (a == 0.0) {
    puts("To nie jest równanie kwadratowe!");
    return -1;
  }

  // Zmienne do przechowywania wyników
  double x1, x2;
  // Ilość rozwiązań równania
  int ilosc_rozwiazan;

  // Obliczenia
  ilosc_rozwiazan = rownanie_kwadratowe(a, b, c, &x1, &x2);
  
  printf("Dla równania kwadratowego o współczynnikach:\n a = %.2f, b = %.2f i c = %.2f\n", a, b, c);

  if (ilosc_rozwiazan == 2) {
    printf("Obliczone pierwiastki to:\n x1 = %.2f, x2 = %.2f\n", x1, x2);
  } else if (ilosc_rozwiazan == 1) {
    printf("Równanie ma jedno rozwiązanie:\n x = %.2f\n", x1);
  } else {
    puts("Równanie nie posiada rozwiązań");
  }

  return 0;
}

/** 
 * Funkcja obliczająca pierwiastki równania kwardatowego.
 * Współczynniki równania należy przekazać w argumentach a, b i c.
 * Wartości obliczonych pierwiastków zostaną zapisane w zmiennych których
 * adresy są przekazane w argumentach x1 oraz x2.
 * Funkcja zwraca ilość rozwiązań równania: 0, 1 lub 2.
 */
int rownanie_kwadratowe(double a, double b, double c, double *x1, double *x2)
{
  double delta = b*b - 4*a*c;

  if (delta > 0) {
    *x1 = (-b - sqrt(delta))/(2*a);
    *x2 = (-b + sqrt(delta))/(2*a);
    return 2;
  } else if (delta < 0) {
    return 0;
  } else {
    // Dla delty równej 0
    *x1 = -b/(2*a);
    return 1;
  }
}
