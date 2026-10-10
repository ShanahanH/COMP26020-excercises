#include <stdio.h>

void main() {
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(double));
    printf("%d \n", sizeof(unsigned long long int));
    printf("%d \n", sizeof(int)*sizeof(double)*sizeof(unsigned long long int));
}