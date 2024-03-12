#include <stdio.h>
#include <string.h>

#define MAX_POKEMON 151
#define MAX_NAME_LENGTH 50

int main() {
    int numPokemon;
    char listaPokemon[MAX_POKEMON][MAX_NAME_LENGTH];
    char novoPokemon[MAX_NAME_LENGTH];


    scanf("%d", &numPokemon);

    int pokemonUnicos = 0;

    for (int i = 0; i < numPokemon && pokemonUnicos < MAX_POKEMON; i++) {
        scanf("%s", novoPokemon);

        int encontrado = 0;
        for (int j = 0; j < pokemonUnicos; j++) {
            if (strcmp(novoPokemon, listaPokemon[j]) == 0) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            strcpy(listaPokemon[pokemonUnicos], novoPokemon);
            pokemonUnicos++;
        }
    }

    printf("Falta(m) %d pomekon(s).\n", MAX_POKEMON - pokemonUnicos);

    return 0;
}
