// cw07-05
#include <stdio.h>
#include <limits.h>

int main(void)
{
  // Nazwa pliku z liczbami
  const char *filename = "dane.txt";
  
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror(filename);
    return -1;
  }
  
  // Wpisanie do min największej możliwej wartości dla int
  int min = INT_MAX;
  int num;
  while (fscanf(fp, "%d", &num) == 1) {
    if (num < min)
      min = num;
  }

  printf("Najmniejsza odczytana liczba to: %d\n", min);
  fclose(fp);
  return 0;
}
