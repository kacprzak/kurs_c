// cw07-02
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
  
  printf("Dla równania kwadratowego o współczynnikach:\n a = %.2f, b = %.2f i c = %.2f\n", a, b, c);
  double delta = b*b - 4*a*c;

  if (delta > 0) {
    double x1 = (-b - sqrt(delta))/(2*a);
    double x2 = (-b + sqrt(delta))/(2*a);
    printf("Obliczone pierwiastki to:\n x1 = %.2f, x2 = %.2f\n", x1, x2);
  } else if (delta < 0) {
    puts("Równanie nie posiada rozwiązań");
  } else {
    // Dla delty równej 0
    double x = -b/(2*a);
    printf("Równanie ma jedno rozwiązanie:\n x = %.2f\n", x);
  }

  return 0;
}
