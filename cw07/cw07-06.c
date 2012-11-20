// cw07-06
#include <stdio.h>

int main(void)
{
  // Nazwa pliku z liczbami
  const char *filename = "dane.txt";

  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror(filename);
    return -1;
  }

  // Dla prostoty rezerwuję pamięć na 50 elementową tablicę.
  // Aby móc wczytywać dowolną ilość elementów należałoby
  // posłużyć się dynamiczną alokacją pamięci.
  int tab[50];
  
  int size = 0;
  int num;
  while (fscanf(fp, "%d", &num) == 1 && size < 50) {
    tab[size++] = num;
  }
  
  // Można już zamknąć plik
  fclose(fp);

  // Wypisanie niepostortowanych elementów tablicy
  for (int i = 0; i < size; ++i) {
    printf("%d ", tab[i]);
  }
  printf("\n");

  // Sortowanie elementów.
  // Dla celów dydaktycznych zamiast qsort zastosowano
  // własną implementację sortowania bąbelkowego
  int change; // 1 jeśli była zamiana
  int tmp;    // zmienna pomocnicza
  
  for (int i = 0; i < size - 1; ++i) {
    change = 0;
    for (int k = 0; k < size - 1 - i; ++k) {
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
  for (int i = 0; i < size; ++i) {
    printf("%d ", tab[i]);
  }
  printf("\n");

  // Odwrócenie kierunku sortowania (revers)
  for (int i = 0; i < size; ++i) {
    if (i < size - 1 - i) {
      tmp = tab[i];
      tab[i] = tab[size - 1 - i];
      tab[size - 1 - i] = tmp;
    }
  }

  // Wypisanie elementów tablicy malejąco
  for (int i = 0; i < size; ++i) {
    printf("%d ", tab[i]);
  }
  printf("\n");

  return 0;
}
