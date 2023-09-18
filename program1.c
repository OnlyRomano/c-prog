#include <stdio.h>

int main(){
    int i = 5, j = -2, product=0, sum=0;
    float f = 4.2, d = 6.9, fsum = 0, fproduct=0;
    sum = i + j;
    printf("SUM of 2 INT\n");
    sum = i + j;
    printf("sum1 = %d", sum);
    printf("\nSUM2 of an INT and a Float");

    sum = i + f;
    printf("SUM2 = %d\n", sum);
    fsum = j + f;
    printf("SUM3 = %f\n", fsum);
    sum = f + d;
    printf("SUM4 = %d\n", sum);
    product = i * j;
    printf("prod1 = %d\n", product);
    fproduct = f * d;
    printf("prod2 = %f\n", fproduct);
    product = i * f;
    printf("prod3 = %d\n", product);
    fproduct = j * f;
    printf("prod4 = %f\n", fproduct);

    return(0);
}