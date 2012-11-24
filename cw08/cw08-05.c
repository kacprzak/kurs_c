// cw08-05
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926535897932384626433832795

// Deklaracje funkcji
double podaj(char *nazwa);
void pole_prostokata();
void pole_kola();
void pole_trojkata();

int main(void)
{
  while (1) {
    char selection = '\n';

    puts("");
    puts("Siemanko. Co chcesz obliczyć?");
    puts("  1. Pole prostokąta");
    puts("  2. Pole koła");
    puts("  3. Pole trójkąta");
    puts("  4. Chcę wyjść z programu");

    printf("> ");
    while (selection == '\n')
      scanf("%c", &selection);

    switch (selection) {
    case '1':
      pole_prostokata();
      break;
    case '2':
      pole_kola();
      break;
    case '3':
      pole_trojkata();
      break;
    case '4':
      puts("Do zobaczyska!");
      exit(0); // Wyjście z programu
    default:
      puts("Nie kumam. Wybierz jeszcze raz.");
      break;
    }
  }
  return 0;
}

// Bardziej zaawansowane wypytywanie użytkownika o dane.
// Odpytuje aż użytkownik poda liczbę większą od zera.
double podaj(char *nazwa)
{
  int poprawnie_odczytane = 0;
  double wartosc;
  do {
    printf("Podaj %s: ", nazwa);
    poprawnie_odczytane = scanf("%lf", &wartosc);
    getchar(); // Zjada enter
  } while (poprawnie_odczytane != 1 || wartosc <= 0);

  return wartosc;
}

void pole_prostokata()
{
  double a = podaj("a");
  double b = podaj("b");

  printf("Pole prostokąta wynosi: %f\n", a*b);
}

void pole_kola()
{
  double r = podaj("r");

  printf("Pole koła wynosi: %f\n", PI*r*r);
}

void pole_trojkata()
{
  double a = podaj("a");
  double h = podaj("h");

  printf("Pole trójkąta wynosi: %f\n", 0.5*a*h);  
}
