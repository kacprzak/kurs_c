Uwagi!
======

Wersja języka
-------------

Zadania są napisane w języku C zgodnie z jego standardem z roku 1999
(C99), który różni się nieznacznie od ANSI C (C89). Dlatego aby
skompilować programy z tego repozytorium kompilatorem `gcc`, należy
dodać opcję kompilacji `-std=c99`.

Jeśli z jakiś powodów wymagane jest kompilowanie programów w
standardzie C89, to konieczne będzie przerobienie wszystkich pętli
`for` w ten sposób, aby deklaracja zmiennej indeksu pętli znajdowała
się przed pętlą.

Wersja dla C99:

    for (int i = 0; i < 10; ++i) {
      printf("%d\n", i);
    }

Wersja dla C89:

    int i;
    for (i = 0; i < 10; ++i) {
      printf("%d\n", i);
    }

Kompilacja programem `make`
---------------------------

Aby skompilować wszystkie programy, należy wywołać polecenie `make` w
głównym katalogu repozytorium. Aby skompilować programy tylko z
jednego ćwiczenia, należy wykonać polecenie `make` w katalogu tego
ćwiczenia.

    cd cw06
    make