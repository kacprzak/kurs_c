// cw06-04
#include <stdio.h>

int main(void)
{
  puts("Program obliczający pierwiastki równania kwadratowego.");
  
  FILE *fp = fopen("cw06-04.txt", "r");
  if (fp == NULL) {
    puts("Nie udało się otworzyć pliku!");
    return -1;
  }

  double a, b, c;

  while (fscanf(fp, "%lf %lf %lf", &a, &b, &c) == 3) {
    puts("========================================");

    if (a == 0) {
      puts("To nie jest równanie kwadratowe!");
      return -1;
    }
  
    printf("Dla równania kwadratowego o współczynnikach:\n a = %.2f, b = %.2f i c = %.2f\n", a, b, c);
    double delta = b*b - 4*a*c;

    if (delta > 0) {
      double x1 = (-b - delta)/(2*a);
      double x2 = (-b + delta)/(2*a);
      printf("Obliczone pierwiastki to:\n x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta < 0) {
      puts("Równanie nie posiada rozwiązań");
    } else {
      // Dla delty równej 0
      double x = -b/(2*a);
      printf("Równanie ma jedno rozwiązanie:\n x = %.2f\n", x);
    }
  }

  return 0;
}
