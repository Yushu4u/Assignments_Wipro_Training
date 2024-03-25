/***
		Problem : Write a C program to find the greatest among three numbers using Nested If/Else Ladder
***/

#include <stdio.h>

int main() {
    int num_1, num_2, num_3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    
    if (num_1 > num_2) {
        if (num_1 > num_3) {
            printf("%d is the greatest.\n", num_1);
        } else {
            printf("%d is the greatest.\n", num_3);
        }
    } else {
        if (num_2 > num_3) {
            printf("%d is the greatest.\n", num_2);
        } else {
            printf("%d is the greatest.\n", num_3);
        }
    }

    return 0;
}

