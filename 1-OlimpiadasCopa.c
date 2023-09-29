#include <stdio.h>

int main() {

    int ano;
    int olimpiadas[29] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};
    int copa[22] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018, 2022};
    
    scanf("%d", &ano);

    int condicionalOlimpiadas = 0;
    int condicionalCopa = 0;

    for(int i = 0; i < 29; i++){

        if(ano == olimpiadas[i]){
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
            condicionalOlimpiadas = 1;
        }
    }

    for(int i = 0; i < 22; i++){
        if(ano == copa[i]){
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
            condicionalCopa = 1;
        }

    }

    if (condicionalCopa == 0 && condicionalOlimpiadas == 0){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }

    return 0;
}