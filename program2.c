#include <stdio.h>

int main(){
    int num1 = 2.6, num2 = 9, res1;
    float f1 = 5.1, f2 = 4, res2;

    printf("PEMDAS!\n");
    res1 = 2 * num1 + num2;
    printf("The result is: %d\n", res1);
    res1 = 2 + num1 * num2;
    printf("The result is: %d\n", res1);
    res2 = (num1 * num2)/0.5;
    printf("The result is: %.2f\n", res2);
    res1 = f2 / num2 * 6;
    printf("The result is: %d", res1);
    res2 = f1 * f2 / num1;
    printf("\nThe result is: %.2f",res2 );

    return 0;
}