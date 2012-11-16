// cw09-02
#include <stdlib.h> // srand rand
#include <stdio.h>

int main(void)
{
  srand(time(NULL)); // Inicjacja generatora
  
  int liczba = rand() % 2001; // Losowa liczba

  // Wyszukiwanie binarne liczby z przedziału 0 - 2000
  int min = 0;
  int max = 2000;
  int midpoint; // Środek przedziału

  while (max >= min) {
    midpoint = (max + min)/2;

    if (midpoint < liczba) {
      min = midpoint + 1;
    } else if (midpoint > liczba) {
      max = midpoint - 1;
    } else {
      printf("To %d!!!\n", midpoint);
      return 0;
    }
    printf("To nie %d\n", midpoint);
  }
  
  // To nie powinno się wydarzyć
  puts("Nie znaleziono!");
  return 0;
}
