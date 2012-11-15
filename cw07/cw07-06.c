// cw07-06
#include <stdio.h>
#include <limits.h>

int main(void)
{
  // Nazwa pliku z liczbami
  const char *filename = "dane";

  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror(filename);
    return -1;
  }

  // Dla prostoty rezerwuję pamięć na 50 elementową tablicę
  int tab[50];
  
  int num;
  int size = 0;
  while (fscanf(fp, "%d", &num) == 1 && size < 50) {
    tab[size++] = num;
  }
  
  // Można już zamknąć plik
  fclose(fp);

  // Wypisanie niepostortowanych elementów tablicy
  int i;
  for (i = 0; i < size; ++i) {
    printf("%d ", tab[i]);
  }
  printf("\n");

  // Sortowanie elementów.
  // Dla celów dydaktycznych zamiast qsort zastosowano
  // własną implementację sortowania bąbelkowego
  int j, k;   // indeksy
  int change; // 1 jeśli wymagana zamiana
  int tmp;    // zmienna pomocnicza
  
  for (j = 0; j < size - 1; ++j) {
    change = 0;
    for (k = 0; k < size - 1 - j; ++k) {
      if (tab[k+1] < tab[k]) { // Porównanie sąsiadujących elementów
        // Zamiana miejscami (swap)
        tmp = tab[k];
        tab[k] = tab[k+1];
        tab[k+1] = tmp;
        change = 1; // Była zamiana
      }
    }
    if (!change) break; // Jeśli nie było zmian to kończ
  }

  // Wypisanie elementów tablicy rosnąco
  for (i = 0; i < size; ++i) {
    printf("%d ", tab[i]);
  }
  printf("\n");

  // Odwrócenie kierunku sortowania (revers)
  int m;
  for (m = 0; m < size; ++m) {
    if (m < size - 1 - m) {
      tmp = tab[m];
      tab[m] = tab[size - 1 - m];
      tab[size - 1 - m] = tmp;
    }
  }

  // Wypisanie elementów tablicy malejąco
  for (i = 0; i < size; ++i) {
    printf("%d ", tab[i]);
  }
  printf("\n");

  return 0;
}
