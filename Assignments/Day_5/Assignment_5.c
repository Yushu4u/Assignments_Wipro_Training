/***

Q5: Write a program to count number of answer to divide a number in 4 parts.

Input Format:
First Line Of Input contains T test cases
Second line of Input contains a positive integer n,

Output Format:
Print the count number of ways for division can take place.

Examples :

Input:
1
5 => 1 + 1 + 1 + 2

Output: 1

Input:
1
6
2 + 2 + 1 + 1
1 + 1 + 1 + 3
Output: 2

Input:
1
8
1+1+1+5
2+2+2+2
2+2+1+3
1+1+2+4
3+3+1+1
Output: 5

***/

#include <stdio.h>

void printPartitions(int a, int b, int c, int d) {
    printf("%d + %d + %d + %d\n", a, b, c, d);
}

int countWays(int n) {
    int answer= 0;

    // Iterate from 1 to n/4 since each part must be at least 1

    for (int i = 1; i <= n / 4; i++) {
        for (int j = i; j <= n / 3; j++) {
            for (int k = j; k <= n / 2; k++) {
                int l = n - (i + j + k);
                if (l >= k) {
                    answer++;
                    printPartitions(i, j, k, l);
                }
            }
        }
    }

    return answer;
}

int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int n;
        printf("Enter a positive integer: ");
        scanf("%d", &n);

        printf("Number of answer to divide %d into 4 parts: %d\n", n, countWays(n));
    }

    return 0;
}