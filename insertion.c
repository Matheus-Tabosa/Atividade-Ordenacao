#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIRECTORY "instancias-num/"
#define MAX_NUMBERS 100000 

int ler_arquivo(FILE *file, char *nome_arquivo, int *numeros) {
    int i = 0;
    char filepath[256];

    snprintf(filepath, sizeof(filepath), "%s%s", DIRECTORY, nome_arquivo);

    file = fopen(filepath, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nome_arquivo);
        return 1;
    }

    while (fscanf(file, "%d", &numeros[i]) != EOF && i < MAX_NUMBERS) {
        i++;
    }
    fclose(file);

    return i;
}

void insertion_sort(int *numbers, int arr_size) {
    int i, j, atual;

    for (i = 1; i < arr_size; i++) {
        atual = numbers[i];
        for (j = i-1; atual < numbers[j] && j>=0; j--) {
            numbers[j+1] = numbers[j];
        }
        numbers[j+1] = atual;
    }
}
int main(int argc, char *argv[]) {
    FILE *file;
    int numbers[MAX_NUMBERS];
    int arr_size;
    clock_t start;

    if (argc < 2) {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    arr_size = ler_arquivo(file, argv[1], numbers);

    start = clock();

    insertion_sort(numbers, arr_size);

    printf("%.5f\n", (double)(clock() - start)/CLOCKS_PER_SEC);

    return 0;
}