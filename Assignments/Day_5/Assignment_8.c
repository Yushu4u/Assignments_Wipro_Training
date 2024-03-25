/***

Q8: Write a program to check whether product of digits at even places is divisible by sum of digits at odd place of a number.

Examples:
Input:
2157
Output:
TRUE

Input:
1234
Output:
TRUE

***/


#include <stdio.h>

int main() {
    int number;
    int evenProduct = 1, oddSum = 0;
    int position = 1;

    // Input number from the user

    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        int digit = number % 10;
        
        if (position % 2 == 0) {
            evenProduct *= digit;
        } else {
            oddSum += digit;
        }
        
        number /= 10;
        position++;
    }

    if (oddSum != 0 && evenProduct % oddSum == 0) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}
