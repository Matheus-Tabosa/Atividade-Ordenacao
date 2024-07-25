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

void selection_sort(int *numbers, int arr_size) {
    int i, j, menor, temp;

    for (i = 0; i < arr_size; i++) {
        menor = i;
        for (j = i+1; j < arr_size; j++) {
            if (numbers[j] < numbers[menor]) {
                menor = j;
            }
        }

        temp = numbers[menor];
        numbers[menor] = numbers[i];
        numbers[i] = temp;
    }
}

int main() {
    char filename[64];
    FILE *file;
    int numbers_insertion[MAX_NUMBERS];
    int numbers_selection[MAX_NUMBERS];
    int arr_size;
    clock_t start;
    int numbers_filename;

    printf("%37s", "Insertion x Selection\n");

    numbers_filename = 1000;
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 5; j++) {
            sprintf(filename, "num.%d.%d.in", numbers_filename, j);
            printf("%s: ", filename);
            arr_size = ler_arquivo(file, filename, numbers_insertion);
            arr_size = ler_arquivo(file, filename, numbers_selection);

            start = clock();
            insertion_sort(numbers_insertion, arr_size);
            printf("%.5f     ", (double)(clock() - start)/CLOCKS_PER_SEC);

            start = clock();
            selection_sort(numbers_selection, arr_size);
            printf("%.5f\n", (double)(clock() - start)/CLOCKS_PER_SEC);
        }
        numbers_filename *= 10;
    }

    return 0;
}