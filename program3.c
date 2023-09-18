#include <stdio.h>

int main(){
    int x = 4, y = 6, sum;
    sum = x + y;
    printf("Sum of %d and %d is: %d\n",x ,y, sum);
    sum *= 3;
    printf("The result #1: %d\n", sum);
    sum += 5;
    printf("THE result #2: %d\n", sum);
    sum %= 6;
    printf("The result #3: %d\n", sum);
    sum -= 8;
    printf("The result #4: %d \n",sum );
    return 0;
}
