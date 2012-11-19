// cw06-01
#include <stdio.h> // printf, puts
#include <math.h>  // sqrt

int main(void)
{
  // Dla postaci ax^2 + bx + c = 0
  double a = 2;
  double b = 1;
  double c = -2;

  printf("Dla równania kwadratowego o współczynnikach:\n a = %.2f, b = %.2f i c = %.2f\n", a, b, c);
  double delta = b*b - 4*a*c; // 17

  if (delta > 0) {
    double x1 = (-b - sqrt(delta))/(2*a); // -1.28
    double x2 = (-b + sqrt(delta))/(2*a); //  0.78
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
