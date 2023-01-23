#include <stdio.h>
#include "input.h"

float input(int rank);

int main() {
    float price;
    int rank = 0;
    float finalPrice=0;
    do{
        rank++;
        price= input(rank);
        finalPrice += price;
    }while(price!=0);
    printf("The final price of %.2f CZK.\n", finalPrice);
    printf("The average price is %.2f CZK.\n", finalPrice / (rank - 1));
    return 0;
}