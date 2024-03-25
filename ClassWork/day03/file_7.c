#include <stdio.h>

int main()
{
    int g_Num = 6;
    int count = 0;
    int i = 1, j = 1, k = 1, l = 1;
    for (i = 1; i < g_Num; i++)
    {
        for (j = i; j < g_Num; j++)
        {
            for (k = j; k < g_Num; k++)
            {
                for (l = k; l < g_Num; l++)
                {
                    if ((i + j + k + l) == g_Num)
                    {
                        // printf("\n%d+%d+%d+%d=%d", i, j, k, l, g_Num);
                        count++;
                    }
                }
            }
        }
    }
    printf("\nNo of ways: %d", count);

    printf("\n\n");

    return 0;
}
