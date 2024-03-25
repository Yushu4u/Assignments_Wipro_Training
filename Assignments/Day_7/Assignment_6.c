#include <stdio.h>

int main() {
    int arr[10];
    int size, i;
    int even_pos_sum = 0, odd_pos_sum = 0;

    printf("Enter the size of the arr: ");
    scanf("%d", &size);

    printf("Enter %d elements into the arr:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (i % 2 == 0) { 
            even_pos_sum += i;   // sum of even position
        } else { 
            odd_pos_sum += i;   // sum of odd position
        }
    }

    printf("Sum of even positions: %d\n", even_pos_sum);
    printf("Sum of odd positions: %d\n", odd_pos_sum);

    return 0;
}
