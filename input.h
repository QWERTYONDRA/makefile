#include <stdio.h>

float input(int rank) {
    float value;
    int countOfChar;
    do {
        printf("Please enter a positive value of your %d. receipt, type 0 to exit: \n", rank);
        scanf("%f", &value);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You haven\'t typed a real number, please try again\n");
        } else if (value < 0) {
            printf("The value has to be positive, or 0. Please try again.\n");
        }
    } while (countOfChar != 0 || value < 0);
    return value;
}