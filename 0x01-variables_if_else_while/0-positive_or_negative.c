#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(NULL));  // Seed the random number generator

    n = rand() % 101 - 50;  // Generate a random number between -50 and 50

    printf("The number %d is ", n);
    
    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}
