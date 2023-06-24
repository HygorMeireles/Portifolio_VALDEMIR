//  UNIVERSIDADE CATOLICA DE BRASILIA
//  CURSO BACHAREL EM CIENCIAS DA COMPUTACAO
//  DISCIPLINA: ALGORITMOS E PROGRAMACAO ESTRUTURADA - GPE02M0255
//  DOCENTE: VALDEMIR
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	ATIVIDADE SABADO 03/06
 
//  SINTESE: DESAFIO
//  ENTRADA:    DESENVOLVER UM ALGORITMO QUE FAÇA ORDENAÇÃO UTILIZANDO OS METODOS SELECTION SORT E COMB SORT

#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//ordenação do array com selection sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int getNextGap(int gap) {
    gap = (gap * 10) / 13;
    if (gap < 1)
        return 1;
    return gap;
}
//ordenação do array com comb sort
void combSort(int arr[], int n) {
    int gap = n;
    int swapped = 1;
	int i;
	
    while (gap != 1 || swapped == 1) {
        gap = getNextGap(gap);

        swapped = 0;

        for ( i=0; i < n - gap; i++) {
            if (arr[i] > arr[i + gap]) {
                swap(&arr[i], &arr[i + gap]);
                swapped = 1;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Array ordenado pelo Selection Sort:\n");
    printArray(arr, n);

    combSort(arr, n);

    printf("Array ordenado pelo Comb Sort:\n");
    printArray(arr, n);

    return 0;
}
