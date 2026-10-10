#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc == 2){
        int year = atof(argv[1]);

        if (year % 4 == 0){
            if (year % 100 == 0){
                if (year % 400 == 0) {
                    printf("%d is a leap year", year);
                }
                else {
                    printf("%d is not a leap year", year);
                }
            }
            else {
                printf("%d is a leap year", year);
            }
        }
        else {
            printf("%d is not a leap year", year);
        }
    }
}