// cw07-03
#include <stdio.h>

int main(void)
{
  puts("Program obliczający pierwiastki równania kwadratowego.");
  
  // Otowrzenie pliku do odczytu
  FILE *fp = fopen("cw07-03.txt", "r");
  if (fp == NULL) {
    puts("Nie udało się otworzyć pliku do odczytu!");
    return -1;
  }

  FILE *output = fopen("output.txt", "w");
  if (output == NULL) {
    puts("Nie udało się otworzyć pliku do zapisu!");
    return -2;
  }

  double a, b, c;

  // Odczyt kolejnych wierszy z pliku
  while (fscanf(fp, "%lf %lf %lf", &a, &b, &c) == 3) {
    if (a == 0) {
      puts("To nie jest równanie kwadratowe!");
      return -1;
    }
  
    double delta = b*b - 4*a*c;

    if (delta > 0) {
      double x1 = (-b - delta)/(2*a);
      double x2 = (-b + delta)/(2*a);
      fprintf(output, "%.2f %.2f\n", x1, x2);
    } else if (delta < 0) {
      // Przy braku rozwiązań wstaw pusty wiersz
      fprintf(output, "\n");
    } else {
      // Dla delty równej 0
      double x = -b/(2*a);
      fprintf(output, "%.2f\n", x);
    }
  }

  // Zamknięcie plików
  fclose(output);
  fclose(fp);

  return 0;
}
