#include <stdio.h>
int main() {
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int a = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num =num/10;
    }
    if ( a== rev) {
        printf("%d is a palindrome.\n", a);
    } else {
        printf("%d is not a palindrome.\n",a );
    }
return 0;
}