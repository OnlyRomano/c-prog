#include <stdio.h>

int main() {
    int num, choices;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("1. Odd & Even\n");
    printf("2. Positve & Negative\n");
    printf("3. Divisible by 5\n");
    printf("4. ALL\n");
    printf("Enter choices: ");
    scanf("%d", &choices);

    switch(choices){
        case 1:
            if(num % 2 == 0){
                printf("%d is .\n", num);
            }
            else{
                printf("%d is Odd.\n", num);
            }
            break;
        case 2:
            if(num > 0){
                printf("%d is positive.\n", num);
            }
            else if (num < 0){
                printf("%d is negative.\n", num);
            }
            else{
                printf("%d is zero.\n", num);
            }
            break;
        case 3:
            if (num % 5 == 0){
                printf("%d is divisible by 5.\n", num);
            }
            else{
                printf("%d is not divisible by 5.\n", num);
            }
            break;
        case 4:
            if(num % 2 == 0) {
                    printf("%d is even.\n", num);
            }
            else{
                printf("%d is odd.\n", num);
            }

            if (num > 0) {
                printf("%d is positive.\n", num);
            } 
            else if (num < 0) {
                printf("%d is negative.\n", num);
            } 
            else {
                printf("%d is zero.\n", num);
            }

            if (num % 5 == 0) {
                printf("%d is divisible by 5.\n", num);
            } 
            else {
                printf("%d is not divisible by 5.\n", num);
            }
        default:
            printf("Invalid option!\n");
    }

    return 0;
}
