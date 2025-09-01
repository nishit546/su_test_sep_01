#include <stdio.h>

int main() {
    int num;
    double sum = 0;
    int count = 0;
    double average;


    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num != 0) {
            sum =sum+num;
            count++;
        }
    } while (num != 0);

    if (count > 0) {
        average = sum / count;
        printf("\nSum of entered numbers: %.2f\n", sum);
        printf("Average of entered numbers: %.2f\n", average);
    } else {
        printf("\nNo numbers were entered (excluding 0).\n");
    }

    return 0;
}