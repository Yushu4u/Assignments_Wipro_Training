/***  

Q6: Program to Check if product of digits of a number at even and odd position is equal.
Input:

2841
Output:
Yes

Input:

4324
Output:
No

***/



#include <stdio.h>

int productOfDigits(int num) {
    int product = 1;

    while (num != 0) {
        product *= num % 10;
        num /= 10;
    }

    return product;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int evenPositionProduct = 1;
    int oddPositionProduct = 1;
    int position = 1;

    while (number != 0) {
        if (position % 2 == 0) {
            evenPositionProduct *= number % 10;
        } else {
            oddPositionProduct *= number % 10;
        }
        number /= 10;
        position++;
    }

    if (evenPositionProduct == oddPositionProduct) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
