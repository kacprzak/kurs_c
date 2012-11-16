// cw09-01

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  if (argc < 4) {
    puts("Sposób użycia: cw09-01 liczba1 { + | - | x | / } liczba2");
    return -1;
  }

  double liczba1 = atof(argv[1]);
  char dzialanie = argv[2][0]; // Znak działania
  double liczba2 = atof(argv[3]);

  switch (dzialanie) {
  case '+':
    printf(" = %.2f\n", liczba1 + liczba2);
    break;
  case '-':
    printf(" = %.2f\n", liczba1 - liczba2);
    break;
  case 'x':
    printf(" = %.2f\n", liczba1 * liczba2);
    break;
  case '/':
    printf(" = %.2f\n", liczba1 / liczba2);
    break;
  default:
    printf("Nie znam takiego działania: %c\n", dzialanie);
    break;
  }

  return 0;
}
