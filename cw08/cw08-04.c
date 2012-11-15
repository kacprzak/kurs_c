// cw08-04

// Kompilować: gcc cw08-04.c -o cw08-04 -lm

#include <stdio.h>
#include <math.h>

// Obilczanie średniej arytmetycznej i geometrycznej
// liczb w pliku efektywniej jest wykonać bez zastosowania
// tablic, ale skoro takie jest polecenie w zadaniu.

// Deklaracje funkcji
int suma(int *tab, int size);
double srednia_arytmetyczna(int *tab, int size);
double srednia_geometryczna(int *tab, int size);

int main(void)
{
  // Nazwa pliku z liczbami
  const char *filename = "dane.txt";
  
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror(filename);
    return -1;
  }

  // Dla prostoty rezerwuję pamięć na 50 elementową tablicę
  int tab[50];
  
  // Wczytanie liczb do tablicy
  int num;
  int size = 0;
  while (fscanf(fp, "%d", &num) == 1 && size < 50) {
    tab[size++] = num;
  }
  
  // Można już zamknąć plik
  fclose(fp);

  printf("Suma: %d\n", suma(tab, size));
  printf("Średnia arytmetyczna: %f\n", srednia_arytmetyczna(tab, size));
  printf("Średnia geometryczna: %f\n", srednia_geometryczna(tab, size));

  return 0;
}

// tab - wskaźnik na pierwszy element tablicy
// size - rozmiar tablicy
int suma(int *tab, int size)
{
  int result = 0;
  int i;
  for (i = 0; i < size; ++i)
    result += tab[i];

  return result;
}

double srednia_arytmetyczna(int *tab, int size)
{
  // Konieczne jest rzutowanie size na double
  // aby uniknąć dzielenia całkowitoliczbowego.
  return suma(tab, size) / (double)size;
}

double srednia_geometryczna(int *tab, int size)
{
  double result = 1.0;
  int i;
  for (i = 0; i < size; ++i)
    result *= tab[i];

  return pow(result, 1.0/size);
}
