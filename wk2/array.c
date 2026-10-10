#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main(int argc, char **argv) {
    if (argc < 11 && argc > 1) {
        int array[argc-1];

        for (int i = 0; i < argc-1; i++){
            array[i] = atoi(argv[i+1]);
        }

        qsort(array, argc-1, sizeof(int), compare);

        for (int i = 0; i < argc-1; i++){
            printf("%d ", array[i]);
        }

    }
}