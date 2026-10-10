#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc == 4){
        double a = (double) atof(argv[1]);
        double b = (double) atof(argv[2]);
        double c = (double) atof(argv[3]);
        
    
        printf("%f", a*b*c);
    }
}