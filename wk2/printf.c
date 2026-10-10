#include <stdio.h>

int main() {
    for (int i = 1; i < 12; i++) {
        if (i ==1 || i == 11){
            printf("   ######");
        }
        else if (i == 2 || i == 10) {
            printf(" ##      ##");
        }
        else {
            printf("#");
        }
        printf("\n");
    }
}