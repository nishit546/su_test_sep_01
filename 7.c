#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    while (originalNum != 0) {
        remainder = originalNum % 10; 
        sum += remainder * remainder * remainder;
        originalNum /= 10; 
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}